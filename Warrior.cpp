#include "Warrior.h"   // Include the Warrior class header

// Parameterized constructor initializes a Warrior with
// name, health, base power, and armor rating
// Uses initializer list to call Hero constructor for common attributes
Warrior::Warrior(string n, int h, int b, int a) : Hero(n, h, b)
{
    armorRating = a;   // Set the unique Warrior attribute: armor rating
}

// Getter function to return the Warrior's armor rating
int Warrior::getArmor() const
{
    return armorRating;
}

// Function to calculate effective health considering armor
int Warrior::calculateEffectiveHealth() const
{
    // Effective health = base health + (armor * 2)
    return getHealth() + (armorRating * 2); 
}