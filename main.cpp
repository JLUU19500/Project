#include "Blastoise.h"
#include "Charizard.h"
#include <iostream>

int main() {
  // Create instances of Blastoise and Charizard
  Blastoise blastoise("Blastoise", 500, 100, "HydroPump");
  Charizard charizard("Charizard", 480, 130, "Flamethrower");

  std::cout << "The battle begins!\n\n";

  int charizardAttackOption;
  int blastoiseAttackOption;

  // Loop until one of the players is defeated
  while (blastoise.getHealth() > 0 && charizard.getHealth() > 0) {
    // Display the stats of both characters
    charizard.displayStats();
    blastoise.displayStats();

    // Allow the player to choose an attack for Charizard
    std::cout << "\nChoose an attack for Charizard (1: Flamethrower, 2: Dragon "
                 "Claw): ";
    std::cin >> charizardAttackOption;

    if (charizardAttackOption == 1) {
      charizard.swingWeapon(&blastoise);
    } else if (charizardAttackOption == 2) {
      charizard.newAttack(&blastoise);
    } else {
      std::cout << "\nInvalid input. Charizard did nothing.\n";
    }

    // Check if Blastoise's health is reduced to 0
    if (blastoise.getHealth() <= 0) {
      std::cout << blastoise.getName() << " has been defeated. "
                << charizard.getName() << " wins!\n";
      break;
    }

    // Allow the player to choose an attack for Blastoise
    std::cout << "\nChoose an attack for Blastoise (1: Hydro Cannon, 2: Shell "
                 "Tackle): ";
    std::cin >> blastoiseAttackOption;

    if (blastoiseAttackOption == 1) {
      blastoise.swingWeapon(&charizard);
    } else if (blastoiseAttackOption == 2) {
      blastoise.newAttack(&charizard);
    } else {
      std::cout << "\nInvalid input. Blastoise did nothing.\n";
    }

    // Check if Charizard's health is reduced to 0
    if (charizard.getHealth() <= 0) {
      std::cout << charizard.getName() << " has been defeated. "
                << blastoise.getName() << " wins!\n";
      break;
    }
  }

  return 0;
}
