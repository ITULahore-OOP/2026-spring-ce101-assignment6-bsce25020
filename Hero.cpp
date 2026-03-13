#include "Hero.h"

// Parameterized constructor initializes a Hero with a name, health, and base power
Hero::Hero(string n, int h, int b)
{
    heroName = n;     // Set the heros name
    health = h;       // Set the heros health
    basePower = b;    // Set the heros base power
}

// Destructor called when a Hero object is destroyed
Hero::~Hero()
{
    cout << "I am distructor of hero." << endl; // Print message when hero is destroyed
}

// Getter function to return the hero's name
string Hero::getName() const
{
    return heroName;
}

// Getter function to return the hero's health
int Hero::getHealth() const
{
    return health;
} 

// Getter function to return the hero's power
int Hero::getPower() const
{
    return basePower;
}

// Function to reduce the hero's health when taking damage
void Hero::takeDamage(int d)
{
    if (health > d)    // Only reduce health if damage is less than current health
    {
        health = health - d; // Subtract damage from health
    }
}

// Overloaded '>' operator compares two heroes based on their base power
bool Hero::operator>(const Hero &h)
{ 
    if (basePower > h.basePower) // Return true if this hero's power is greater
    {
        return true;
    }
    else 
    {
        return false;             // Otherwise, return false
    }
}

// Overloaded '+' operator adds the health of two heroes and returns the result
int Hero::operator+(const Hero &h)
{
    return health + h.health;  // Sum of health values
}