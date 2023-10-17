#include "Dragonite.h"
#include "Player.h"
#include "catch.hpp"

TEST_CASE("Dragonite functionality", "[Dragonite]") {
    SECTION("Dragonite can perform dragon tail attack") {
        Dragonite dragonite("Dragonite", 42, 35, 0);
        Player opponent("Opponent", cardLibrary);
        int initialOpponentHealth = opponent.getHealth();

        dragonite.performDragonTail(opponent);

        int expectedDamage = dragonite.getDragonTailDamage();
        REQUIRE(opponent.getHealth() == initialOpponentHealth - expectedDamage);
    }

}
