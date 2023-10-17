#ifndef CHARIZARD_H
#define CHARIZARD_H

#include "Player.h"
#include <string>

class Charizard : public Player {
private:
  std::string weapon;

public:
  Charizard(std::string name, int health, int damage, std::string weapon);
  std::string getWeapon() const;
  void setWeapon(std::string newWeapon);
  void swingWeapon(Player *opponent);
  void newAttack(Player *opponent);
  void displayStats();
};

#endif