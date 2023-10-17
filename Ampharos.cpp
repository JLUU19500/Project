#include "Ampharos.h"
#include <iostream>

Ampharos::Ampharos(std::string name, int health, int damage, std::string weapon)
    : Player(name, health, damage), weapon(weapon) {}

std::string Ampharos::getWeapon() const { return weapon; }

void Ampharos::setWeapon(std::string newWeapon) { weapon = newWeapon; }

void Ampharos::swingWeapon(Player *opponent) {
  opponent->takeDamage(getDamage());
  std::cout << getName() << " uses " << weapon << " at " << opponent->getName()
            << "!\n";
}

void Ampharos::newAttack(Player *opponent) {
  int damage = 60; // Modify this value based on the new attack
  opponent->takeDamage(damage);
  std::cout << getName() << " uses Dragon Claw at " << opponent->getName()
            << ", dealing " << damage << " damage!\n";
}

void Ampharos::displayStats() {
  std::cout << "Name: " << getName() << std::endl;
  std::cout << "Health: " << getHealth() << std::endl;
  std::cout << "Damage: " << getDamage() << std::endl;
  std::cout << "Weapon: " << getWeapon() << std::endl;
  std::cout << "\n" << std::endl;
}