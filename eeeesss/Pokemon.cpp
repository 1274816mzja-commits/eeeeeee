#include "Pokemon.h"
#include <algorithm>
#include <cstdlib>
#include <stdexcept>

Stats::Stats(int hp, int atk, int def, int spd, int spa, int spdef)
    : health(hp), attack(atk), defense(def), speed(spd),
    specialAttack(spa), specialDefense(spdef) {
    if (hp <= 0 || atk <= 0 || def <= 0 || spd <= 0 || spa <= 0 || spdef <= 0)
        throw std::invalid_argument("Els stats han de ser positius.");
}

StatModifier::StatModifier(Stat stat, int stages) : stat(stat), stages(stages) {
    if (stages < -2 || stages > 2)
        throw std::invalid_argument("Un modificador ha de ser entre -2 i +2.");
}

StatusEffect::StatusEffect(StatusType type, int duration)
    : type(type), duration(type == StatusType::None ? 0 : duration) {
    if (type != StatusType::None && duration != -1 && duration <= 0)
        throw std::invalid_argument("Durada positiva o -1 per a infinit.");
}
StatusType StatusEffect::getType() const { return type; }
int StatusEffect::getDuration() const { return duration; }
bool StatusEffect::blocksAttack() const {
    return !expired() && (type == StatusType::Sleep || type == StatusType::Frozen);
}
void StatusEffect::nextTurn() { if (duration > 0) --duration; }
bool StatusEffect::expired() const { return type == StatusType::None || duration == 0; }

Move::Move(std::string name, int power, int pp, bool special,
    StatusEffect effect, int effectChance, StatModifier modifier, int modifierChance)
    : name(name), power(power), pp(pp), special(special), statusEffect(effect),
    statusEffectPercentage(effectChance), statModifier(modifier),
    statModifierPercentage(modifierChance) {
    if (power < 0 || pp < 0 || effectChance < 0 || effectChance > 100 ||
        modifierChance < 0 || modifierChance > 100)
        throw std::invalid_argument("Valors del moviment no valids.");
}
const std::string& Move::getName() const { return name; }
int Move::getPower() const { return power; }
int Move::getPP() const { return pp; }
bool Move::isSpecial() const { return special; }
bool Move::use() { if (pp == 0) return false; --pp; return true; }
const StatusEffect& Move::getStatusEffect() const { return statusEffect; }
int Move::getStatusEffectPercentage() const { return statusEffectPercentage; }
const StatModifier& Move::getStatModifier() const { return statModifier; }
int Move::getStatModifierPercentage() const { return statModifierPercentage; }

Pokemon::Pokemon(std::string name, Stats stats, std::vector<Move> moves)
    : name(name), baseStats(stats), health(stats.health), moves(moves), stages{} {
    if (moves.empty() || moves.size() > 4)
        throw std::invalid_argument("Un Pokemon necessita entre 1 i 4 moviments.");
}
const std::string& Pokemon::getName() const { return name; }
int Pokemon::getHealth() const { return health; }
bool Pokemon::isFainted() const { return health <= 0; }
int Pokemon::getStage(Stat stat) const { return stages[static_cast<int>(stat)]; }
int Pokemon::getStat(Stat stat) const {
    int value = 0;
    switch (stat) {
    case Stat::Attack: value = baseStats.attack; break;
    case Stat::Defense: value = baseStats.defense; break;
    case Stat::Speed: value = baseStats.speed; break;
    case Stat::SpecialAttack: value = baseStats.specialAttack; break;
    case Stat::SpecialDefense: value = baseStats.specialDefense; break;
    }
    int stage = getStage(stat);
    double multiplier = stage >= 0 ? (2.0 + stage) / 2.0 : 2.0 / (2.0 - stage);
    if (stat == Stat::Speed && hasStatus(StatusType::Paralysed)) multiplier *= 0.5;
    if (stat == Stat::Attack && hasStatus(StatusType::Burn)) multiplier *= 0.5;
    return std::max(1, static_cast<int>(value * multiplier));
}
int Pokemon::getMoveCount() const { return static_cast<int>(moves.size()); }
int Pokemon::getMovePP(int index) const { return moves.at(index).getPP(); }
bool Pokemon::learnMove(const Move& move, int replaceIndex) {
    if (moves.size() < 4) { moves.push_back(move); return true; }
    if (replaceIndex < 0 || replaceIndex >= 4) return false;
    moves[replaceIndex] = move;
    return true;
}
void Pokemon::takeDamage(int damage) { health = std::max(0, health - std::max(0, damage)); }
void Pokemon::heal(int amount) {
    if (!isFainted()) health += std::min(std::max(0, amount), baseStats.health - health);
}
bool Pokemon::hasStatus(StatusType type) const {
    for (const StatusEffect& effect : statusEffects)
        if (!effect.expired() && effect.getType() == type) return true;
    return false;
}
void Pokemon::addStatus(const StatusEffect& effect) {
    if (isFainted() || effect.expired()) return;
    for (StatusEffect& current : statusEffects) {
        if (current.getType() == effect.getType()) { current = effect; return; }
    }
    statusEffects.push_back(effect);
}
void Pokemon::applyModifier(const StatModifier& modifier) {
    int& stage = stages[static_cast<int>(modifier.stat)];
    stage = std::max(-6, std::min(6, stage + modifier.stages));
}
void Pokemon::clearModifiers() { for (int& stage : stages) stage = 0; }
void Pokemon::updateDebuffs() {
    if (isFainted()) return;
    for (StatusEffect& effect : statusEffects) {
        if (effect.expired()) continue;
        if (effect.getType() == StatusType::Poisoned)
            takeDamage(std::max(1, baseStats.health / 8));
        else if (effect.getType() == StatusType::Burn)
            takeDamage(std::max(1, baseStats.health / 16));
        effect.nextTurn();
    }
    statusEffects.erase(std::remove_if(statusEffects.begin(), statusEffects.end(),
        [](const StatusEffect& effect) { return effect.expired(); }), statusEffects.end());
}
bool Pokemon::attack(Pokemon& target, int moveIndex) {
    if (this == &target || isFainted() || target.isFainted() || moveIndex < 0 ||
        moveIndex >= static_cast<int>(moves.size())) return false;
    for (const StatusEffect& effect : statusEffects)
        if (effect.blocksAttack()) return false;
    Move& move = moves[moveIndex];
    if (!move.use()) return false;
    if (move.getPower() > 0) {
        Stat attackStat = move.isSpecial() ? Stat::SpecialAttack : Stat::Attack;
        Stat defenseStat = move.isSpecial() ? Stat::SpecialDefense : Stat::Defense;
        // Formula simplificada: no es reprodueix la formula oficial del joc.
        int damage = std::max(1, move.getPower() + getStat(attackStat) - target.getStat(defenseStat));
        target.takeDamage(damage);
    }
    if (!target.isFainted()) {
        if (std::rand() % 100 < move.getStatusEffectPercentage())
            target.addStatus(move.getStatusEffect());
        if (std::rand() % 100 < move.getStatModifierPercentage())
            target.applyModifier(move.getStatModifier());
    }
    return true;
}

Team::Team(std::string name) : name(name), activeIndex(0) {}
const std::string& Team::getName() const { return name; }
int Team::size() const { return static_cast<int>(pokemons.size()); }
bool Team::addPokemon(const Pokemon& pokemon) {
    if (pokemons.size() == 6) return false;
    pokemons.push_back(pokemon);
    return true;
}
Pokemon& Team::active() { return pokemons.at(activeIndex); }
const Pokemon& Team::active() const { return pokemons.at(activeIndex); }
bool Team::changeActive(int index) {
    if (index < 0 || index >= size() || index == activeIndex || pokemons[index].isFainted())
        return false;
    if (!pokemons.empty()) active().clearModifiers();
    activeIndex = index;
    return true;
}
bool Team::selectFirstAlive() {
    for (int i = 0; i < size(); ++i) {
        if (!pokemons[i].isFainted()) {
            if (i != activeIndex) { active().clearModifiers(); activeIndex = i; }
            return true;
        }
    }
    return false;
}
bool Team::allFainted() const {
    for (const Pokemon& pokemon : pokemons) if (!pokemon.isFainted()) return false;
    return true;
}

Battle::Battle(Team friendly, Team enemy) : friendly(friendly), enemy(enemy) {
    if (friendly.size() == 0 || enemy.size() == 0)
        throw std::invalid_argument("Cada equip del combat necessita entre 1 i 6 Pokemon.");
}
Team& Battle::getTeam(bool side) { return side ? friendly : enemy; }
const Team& Battle::getTeam(bool side) const { return side ? friendly : enemy; }
bool Battle::attack(bool side, int moveIndex) {
    if (isFinished()) return false;
    return getTeam(side).active().attack(getTeam(!side).active(), moveIndex);
}
void Battle::endTurn() {
    // Els dos actius reben els efectes abans de comprovar el resultat.
    friendly.active().updateDebuffs();
    enemy.active().updateDebuffs();
}
bool Battle::isFinished() const { return friendly.allFainted() || enemy.allFainted(); }
std::string Battle::winner() const {
    if (!isFinished()) return "Combat en curs";
    if (friendly.allFainted() && enemy.allFainted()) return "Empat";
    return friendly.allFainted() ? enemy.getName() : friendly.getName();
}