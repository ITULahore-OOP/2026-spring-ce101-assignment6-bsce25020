#ifndef KNIGHT_H
#define KNIGHT_H
#include "Warrior.h"   // Include the Warrior class header (Knight inherits from Warrior)
#include <string>      
#include <iostream>    
using namespace std;   

// Knight class declaration inherits from Warrior
class Knight : public Warrior
{
    int chargeBonus;   // Unique attribute for Knight: extra damage bonus when charging

    public:
    // Parameterized constructor initializes a Knight with
    // name, health, base power, armor (from Warrior), and charge bonus
    Knight(string n, int h, int b, int a, int c);
    // Getter function to return the Knight's charge bonus
    int getChargeBonus() const;
    // Function to calculate burst damage (base power + charge bonus)
    int calculateBurstDamage() const;
};

#endif