#include "Blastoise.h"
#include "Player.h"
#include "catch.hpp"

TEST_CASE("Blastoise functionality", "[Blastoise]") {
    SECTION("Blastoise can perform water gun attack") {
        Blastoise blastoise("Blastoise", 35, 30, 0);
        Player opponent("Opponent", cardLibrary);
        int initialOpponentHealth = opponent.getHealth();

        blastoise.performWaterGun(opponent);

        int expectedDamage = blastoise.getWaterGunDamage();
        REQUIRE(opponent.getHealth() == initialOpponentHealth - expectedDamage);
    }

}
