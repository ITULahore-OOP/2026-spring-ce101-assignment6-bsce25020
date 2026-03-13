#include "Guild.h"

// Parameterized constructor initializes a Guild with a name and sets up roster
Guild::Guild(string N)
{
    guildName = N;        // Set the guild's name
    memberCount = 0;      // Initially there are no members in the guild

    // Initialize all 15 slots in the roster to empty
    for(int i = 0; i < 15; i++)
    {
        roster[i] = nullptr;
    }
}

// Destructor called when a Guild object is destroyed
Guild::~Guild() 
{
    // Notify that the guild has been disbanded
    cout << "The guild " << guildName << " has been disbanded!" << endl;
}

// Function to calculate the total power of all guild members
int Guild::calculateTotalGuildPower() 
{
    int totalPower = 0; // Initialize total power

    // Loop through each member in the roster
    for (int i = 0; i < memberCount; i++)
    {
        // Add members power to totalPower if the slot is not empty
        if (roster[i] != nullptr)
            totalPower = totalPower + roster[i]->getPower();
    }
    return totalPower;  // Return the total guild power
}

// Function to display guild statistics
void Guild::displayGuildStats()
{
    cout << "Guild Name: " << guildName << endl;             // Display guild name
    cout << "Total Members: " << memberCount << "/15" << endl; // Display number of members
    cout << "Guild Members:" << endl;
    // Loop through each member and display their name and power
    for(int i = 0; i < memberCount; i++)
    {
        cout << roster[i]->getName() << "  " << roster[i]->getPower() << endl;
    }
    // Display total guild power by calling the calculateTotalGuildPower function
    cout << "Total Guild Power: " << calculateTotalGuildPower() << endl;
}

// Overloaded += operator to add a new Hero to the guild
void Guild::operator+=(Hero *newHero)
{
    // Check if there is space in the guild
    if(memberCount < 15)
    {
        roster[memberCount] = newHero; // Add hero to roster
        memberCount++;                 // Increase member count
    }
    else
    {
        // Guild is full cannot add new member
        cout << "Guild is at full capacity!" << endl;
    }
}


ostream& operator<<(ostream& os, const Guild& g)
{
    os << "Guild: " << g.guildName << endl;           // Print guild name
    os << "Members: " << g.memberCount << endl;      // Print member count
    // Loop through each member and print their name and power
    for (int i = 0; i < g.memberCount; i++)
    {
            // Display Member name Member power
        os << "- " << g.roster[i]->getName() << " (Power: " << g.roster[i]->getPower() << ")" << endl;
    }
    return os; // Return the stream object
}