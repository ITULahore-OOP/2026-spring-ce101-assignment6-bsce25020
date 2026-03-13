#ifndef SPELLBLADE_H
#define SPELLBLADE_H
#include "MagicalEntity.h"  // Include MagicalEntity for magical attributes (mana & spell power)
#include "Warrior.h"        // Include Warrior for physical attributes (health, power, armor)
#include <string>           
#include <iostream>         
using namespace std;       

// SpellBlade class declaration inherits from both MagicalEntity and Warrior
class SpellBlade : public MagicalEntity, public Warrior
{
    public:
    // Parameterized constructor: initializes SpellBlade with
    // name, health, base power, armor, mana pool, and spell power
    // Calls both base class constructors using initializer lists
    SpellBlade(string n, int h, int b, int a, int m, int s);
    // Function to calculate hybrid damage (physical + magical power)
    int calculateHybridDamage();
};

#endif