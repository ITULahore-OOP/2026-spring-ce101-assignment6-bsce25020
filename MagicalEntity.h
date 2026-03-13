#ifndef MAGICALENTITY_H
#define MAGICALENTITY_H
#include <string>      
#include <iostream>   
using namespace std;  
// MagicalEntity class declaration
class MagicalEntity
{
    int manaPool;      // Total mana available
    int spellPower;    // Power of the spells 
    public:
    // Parameterized constructor initializes MagicalEntity with mana pool and spell power
    MagicalEntity(int m, int s);
    // Getter function to return the entity's mana pool
    int getMana() const;
    // Getter function to return the entity's spell power
    int getSpellPower() const;
};

#endif