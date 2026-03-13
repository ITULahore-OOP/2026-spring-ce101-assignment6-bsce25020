#include "SpellBlade.h"   // Include the SpellBlade class header


// Parameterized constructor: initializes a SpellBlade with
// name, health, base power, armor, mana pool, and spell power
// Uses initializer lists to call both base classes: MagicalEntity and Warrior
SpellBlade::SpellBlade(string n, int h, int b, int a, int m, int s) 
    : MagicalEntity(m, s), Warrior(n, h, b, a)
{
   
}

// Function to calculate hybrid damage combines physical and magical power
int SpellBlade::calculateHybridDamage()
{
    return getPower() + getSpellPower(); // Physical power from Warrior, magical from MagicalEntity
}