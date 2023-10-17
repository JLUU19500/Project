#include "Charizard.h"
#include "Player.h"
#include "catch.hpp"

TEST_CASE("Charizard functionality", "[Charizard]") {
    SECTION("Charizard can perform fire blast attack") {
        Charizard charizard("Charizard", 38, 22, 0);
        Player opponent("Opponent", cardLibrary);
        int initialOpponentHealth = opponent.getHealth();

        charizard.performFireBlast(opponent);

        int expectedDamage = charizard.getFireBlastDamage();
        REQUIRE(opponent.getHealth() == initialOpponentHealth - expectedDamage);
    }
}
