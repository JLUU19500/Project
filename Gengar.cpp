#include "Gengar.h"
#include <iostream>

Gengar::Gengar(std::string name, int health, int damage, std::string weapon)
    : Player(name, health, damage), weapon(weapon) {}

std::string Gengar::getWeapon() const { return weapon; }

void Gengar::setWeapon(std::string newWeapon) { weapon = newWeapon; }

void Gengar::swingWeapon(Player *opponent) {
  opponent->takeDamage(getDamage());
  std::cout << getName() << " uses " << weapon << " at " << opponent->getName()
            << "!\n";
}

void Gengar::newAttack(Player *opponent) {
  int damage = 60; // Modify this value based on the new attack
  opponent->takeDamage(damage);
  std::cout << getName() << " uses Dragon Claw at " << opponent->getName()
            << ", dealing " << damage << " damage!\n";
}

void Gengar::displayStats() {
  std::cout << "Name: " << getName() << std::endl;
  std::cout << "Health: " << getHealth() << std::endl;
  std::cout << "Damage: " << getDamage() << std::endl;
  std::cout << "Weapon: " << getWeapon() << std::endl;
  std::cout << "\n" << std::endl;
}