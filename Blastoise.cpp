#include "Blastoise.h"
#include <iostream>

// Constructor for Blastoise
Blastoise::Blastoise(std::string name, int health, int damage,
                     std::string weapon)
    : Player(name, health, damage), weapon(weapon) {}

// Getter for weapon
std::string Blastoise::getWeapon() const { return weapon; }

// Setter for weapon
void Blastoise::setWeapon(std::string newWeapon) { weapon = newWeapon; }

// Method for attacking an opponent
void Blastoise::swingWeapon(Player *opponent) {
  opponent->takeDamage(getDamage());
  std::cout << getName() << " uses " << weapon << " at " << opponent->getName()
            << "!\n";
}

// Method for a new attack named Shell Tackle
void Blastoise::newAttack(Player *opponent) {
  int damage = 50; // Modify this value based on the new attack
  opponent->takeDamage(damage);
  std::cout << getName() << " uses Shell Tackle at " << opponent->getName()
            << ", dealing " << damage << " damage!\n";
}

// Method for displaying the statistics of Blastoise
void Blastoise::displayStats() {
  std::cout << "Name: " << getName() << std::endl;
  std::cout << "Health: " << getHealth() << std::endl;
  std::cout << "Damage: " << getDamage() << std::endl;
  std::cout << "Weapon: " << getWeapon() << std::endl;
  std::cout << "\n" << std::endl;
}
