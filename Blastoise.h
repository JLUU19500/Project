#ifndef BLASTOISE_H
#define BLASTOISE_H

#include "Player.h"
#include <string>

class Blastoise : public Player {
private:
  std::string weapon; // The weapon of the Blastoise

public:
  Blastoise(std::string name, int health, int damage,
            std::string weapon);         // Constructor for Blastoise
  std::string getWeapon() const;         // Getter for the weapon
  void setWeapon(std::string newWeapon); // Setter for the weapon
  void swingWeapon(Player *opponent);    // Method for swinging the weapon and
                                         // attacking the opponent
  void newAttack(Player *opponent);      // Method for a new attack
  void displayStats(); // Method for displaying the stats of the Blastoise
};

#endif
