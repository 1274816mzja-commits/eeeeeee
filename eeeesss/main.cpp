#include "Pokemon.h"
#include <cstdlib>
#include <iostream>

int main() {
    std::srand(1);
    Move tackle("Placatge", 25, 35, false);
    Move ember("Brasa", 30, 25, true, StatusEffect(StatusType::Burn, 3), 10);
    Move growl("Grunyit", 0, 40, false, StatusEffect(), 0,
        StatModifier(Stat::Attack, -1), 100);
    Pokemon charmander("Charmander", Stats(100, 40, 30, 50, 45, 35), { tackle, ember, growl });
    Pokemon bulbasaur("Bulbasaur", Stats(110, 40, 40, 35, 45, 45), { tackle, growl });
    Pokemon squirtle("Squirtle", Stats(110, 40, 45, 30, 40, 45), { tackle });
    Team friendly("Equip amic"), enemy("Equip enemic");
    friendly.addPokemon(charmander);
    enemy.addPokemon(bulbasaur);
    enemy.addPokemon(squirtle);
    Battle battle(friendly, enemy);
    auto replaceFainted = [&battle]() {
        if (!battle.isFinished()) {
            for (bool side : {true, false}) {
                Team& team = battle.getTeam(side);
                if (team.active().isFainted()) team.selectFirstAlive();
            }
        }
        };

    // Demostracio basica: tots dos equips trien atacar.
    // Els menus, pocions i objectes del diagrama no s'implementen aqui.
    for (int turn = 1; turn <= 30 && !battle.isFinished(); ++turn) {
        Team& f = battle.getTeam(true);
        Team& e = battle.getTeam(false);
        bool first = f.active().getStat(Stat::Speed) >= e.active().getStat(Stat::Speed);
        battle.attack(first, 0);
        // Un Pokemon derrotat no pot executar l'atac pendent.
        bool secondCanAttack = !battle.getTeam(!first).active().isFainted();
        replaceFainted();
        if (!battle.isFinished() && secondCanAttack) battle.attack(!first, 0);
        replaceFainted();
        if (!battle.isFinished()) battle.endTurn();
        std::cout << "Torn " << turn << ": " << f.active().getName() << " HP="
            << f.active().getHealth() << ", " << e.active().getName()
            << " HP=" << e.active().getHealth() << '\n';
        replaceFainted();
    }
    std::cout << battle.winner() << '\n';
}
