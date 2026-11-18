#ifndef POKEMON_H
#define POKEMON_H

#include <string>
#include <vector>

enum class Stat { Attack, Defense, Speed, SpecialAttack, SpecialDefense };
enum class StatusType { None, Paralysed, Poisoned, Sleep, Frozen, Burn };

struct Stats {
    int health, attack, defense, speed, specialAttack, specialDefense;
    Stats(int hp, int atk, int def, int spd, int spa, int spdef);
};

struct StatModifier {
    Stat stat;
    int stages;
    StatModifier(Stat stat = Stat::Attack, int stages = 0);
};

class StatusEffect {
private:
    StatusType type;
    int duration;
public:
    StatusEffect(StatusType type = StatusType::None, int duration = 0);
    StatusType getType() const;
    int getDuration() const;
    bool blocksAttack() const;
    void nextTurn();
    bool expired() const;
};

class Move {
private:
    std::string name;
    int power;
    int pp;
    bool special;
    StatusEffect statusEffect;
    int statusEffectPercentage;
    StatModifier statModifier;
    int statModifierPercentage;
public:
    Move(std::string name, int power, int pp, bool special,
        StatusEffect effect = StatusEffect(), int effectChance = 0,
        StatModifier modifier = StatModifier(), int modifierChance = 0);
    const std::string& getName() const;
    int getPower() const;
    int getPP() const;
    bool isSpecial() const;
    bool use();
    const StatusEffect& getStatusEffect() const;
    int getStatusEffectPercentage() const;
    const StatModifier& getStatModifier() const;
    int getStatModifierPercentage() const;
};

class Pokemon {
private:
    std::string name;
    Stats baseStats;
    int health;
    std::vector<Move> moves;
    std::vector<StatusEffect> statusEffects;
    int stages[5];
public:
    Pokemon(std::string name, Stats stats, std::vector<Move> moves);
    const std::string& getName() const;
    int getHealth() const;
    bool isFainted() const;
    int getStat(Stat stat) const;
    int getStage(Stat stat) const;
    int getMoveCount() const;
    int getMovePP(int index) const;
    bool learnMove(const Move& move, int replaceIndex = -1);
    void takeDamage(int damage);
    void heal(int amount);
    void addStatus(const StatusEffect& effect);
    bool hasStatus(StatusType type) const;
    void applyModifier(const StatModifier& modifier);
    void clearModifiers();
    void updateDebuffs();
    bool attack(Pokemon& target, int moveIndex);
};

class Team {
private:
    std::string name;
    std::vector<Pokemon> pokemons;
    int activeIndex;
public:
    explicit Team(std::string name);
    const std::string& getName() const;
    int size() const;
    bool addPokemon(const Pokemon& pokemon);
    Pokemon& active();
    const Pokemon& active() const;
    bool changeActive(int index);
    bool selectFirstAlive();
    bool allFainted() const;
};

class Battle {
private:
    Team friendly;
    Team enemy;
public:
    Battle(Team friendly, Team enemy);
    Team& getTeam(bool friendlySide);
    const Team& getTeam(bool friendlySide) const;
    bool attack(bool friendlySide, int moveIndex);
    void endTurn();
    bool isFinished() const;
    std::string winner() const;
};

#endif#pragma once
