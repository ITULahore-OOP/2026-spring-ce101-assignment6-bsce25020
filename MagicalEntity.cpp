#include "MagicalEntity.h"   // Include the MagicalEntity class header


// Parameterized constructor initializes a MagicalEntity with mana pool and spell power
MagicalEntity::MagicalEntity(int m, int s)
{
    manaPool = m;        // Set the total mana available
    spellPower = s;      // Set the spell power value
}

// Getter function to return the entitys mana pool
int MagicalEntity::getMana() const 
{
    return manaPool;
}

// Getter function to return the entity's spell power
int MagicalEntity::getSpellPower() const 
{
    return spellPower;
}