#include "Gengar.h"
#include "Player.h"
#include "catch.hpp"

TEST_CASE("Gengar functionality", "[Gengar]") {
    SECTION("Gengar can perform shadow punch attack") {
        Gengar gengar("Gengar", 36, 18, 0);
        Player opponent("Opponent", cardLibrary);
        int initialOpponentHealth = opponent.getHealth();

        gengar.performShadowPunch(opponent);

        int expectedDamage = gengar.getShadowPunchDamage();
        REQUIRE(opponent.getHealth() == initialOpponentHealth - expectedDamage);
    }

}
