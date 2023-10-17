#ifndef AMPHAROS_H
#define AMPHAROS_H

#include "Player.h"
#include <string>

class Ampharos : public Player {
private:
  std::string weapon;

public:
  Ampharos(std::string name, int health, int damage, std::string weapon);
  std::string getWeapon() const;
  void setWeapon(std::string newWeapon);
  void swingWeapon(Player *opponent);
  void newAttack(Player *opponent);
  void displayStats();
};

#endif