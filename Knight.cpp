#include "Knight.h"    // Include the Knight class header
#include "Warrior.h"   // Include the Warrior class header


// Parameterized constructor initializes a Knight with name, health, base power, armor, and charge bonus
// Uses initializer list to call the Warrior constructor for common attributes
Knight::Knight(string n, int h, int b, int a, int c) : Warrior(n, h, b, a)
{
    chargeBonus = c; // Set the unique Knight attribute charge bonus
}

// Getter function to return the Knight's charge bonus
int Knight::getChargeBonus() const
{
    return chargeBonus;
}

// Function to calculate burst damage (base power + charge bonus)
int Knight::calculateBurstDamage() const
{
    return getPower() + chargeBonus; // getPower() comes from Warrior
}