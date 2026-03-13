#ifndef WARRIOR_H
#define WARRIOR_H
#include "Hero.h"       // Include Hero class as Warrior inherits from Hero
#include <string>       
#include <iostream>     
using namespace std;    

// Warrior class declaration inherits from Hero
class Warrior : public Hero
{
    int armorRating;    // Unique attribute for Warrior reduces damage taken
    public:
    // Parameterized constructor initializes a Warrior with
    // name, health, base power, and armor rating
    Warrior(string n, int h, int b, int a);
    // Getter function to return the Warriors armor rating
    int getArmor() const;
    // Function to calculate effective health (health + armor bonus)
    int calculateEffectiveHealth() const;
};

#endif