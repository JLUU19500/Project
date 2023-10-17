#include "Ampharos.h"
#include "Player.h"
#include "catch.hpp"

TEST_CASE("Ampharos functionality", "[Ampharos]") {
    SECTION("Ampharos can perform special attack") {
        Ampharos ampharos("Ampharos", 40, 25, 10);
        Player opponent("Opponent", cardLibrary); 
        int initialOpponentHealth = opponent.getHealth();

        ampharos.performSpecialAttack(opponent);

        int expectedDamage = ampharos.getSpecialAttackDamage();
        REQUIRE(opponent.getHealth() == initialOpponentHealth - expectedDamage);
    }


}
