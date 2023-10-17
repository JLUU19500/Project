#ifndef CHARIZARD_H
#define CHARIZARD_H

#include "Player.h"
#include <string>

class Charizard : public Player {
private:
  std::string weapon; // The weapon of the Charizard

public:
  Charizard(std::string name, int health, int damage,
            std::string weapon);         // Constructor for Charizard
  std::string getWeapon() const;         // Getter for the weapon
  void setWeapon(std::string newWeapon); // Setter for the weapon
  void swingWeapon(Player *opponent);    // Method for swinging the weapon and
                                         // attacking the opponent
  void newAttack(Player *opponent);      // Method for a new attack
  void displayStats(); // Method for displaying the stats of the Charizard
};

#endif
