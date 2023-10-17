#include "Blastoise.h"
#include <iostream>

Blastoise::Blastoise(std::string name, int health, int damage,
                     std::string weapon)
    : Player(name, health, damage), weapon(weapon) {}

std::string Blastoise::getWeapon() const { return weapon; }

void Blastoise::setWeapon(std::string newWeapon) { weapon = newWeapon; }

void Blastoise::swingWeapon(Player *opponent) {
  opponent->takeDamage(getDamage());
  std::cout << getName() << " uses " << weapon << " at " << opponent->getName()
            << "!\n";
}

void Blastoise::newAttack(Player *opponent) {
  int damage = 50; // Modify this value based on the new attack
  opponent->takeDamage(damage);
  std::cout << getName() << " uses Shell Tackle at " << opponent->getName()
            << ", dealing " << damage << " damage!\n";
}

void Blastoise::displayStats() {
  std::cout << "Name: " << getName() << std::endl;
  std::cout << "Health: " << getHealth() << std::endl;
  std::cout << "Damage: " << getDamage() << std::endl;
  std::cout << "Weapon: " << getWeapon() << std::endl;
  std::cout << "\n" << std::endl;
}