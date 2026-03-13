#ifndef GUILD_H
#define GUILD_H
#include "Hero.h"       // Include the Hero class header
#include <string>       
#include <iostream>     
using namespace std;    

// Guild class declaration
class Guild
{
    string guildName;       // Name of the guild
    Hero* roster[15];       // Array of pointers to Hero objects, max 15 members
    int memberCount;        // Current number of members in the guild
    public:
    // Parameterized constructor creates a guild with a specific name
    Guild(string N);
    // Destructor called when a Guild object is destroyed
    ~Guild();
    // Function to calculate the total power of all members in the guild
    int calculateTotalGuildPower();
    // Function to display guild stats (members and total power)
    void displayGuildStats();
    // Overloaded += operator to add a Hero to the guild
    void operator+=(Hero *newHero);
    // Friend function to allow easy printing of a guild using cout
    friend ostream& operator<<(ostream& os, const Guild& g);
};

#endif