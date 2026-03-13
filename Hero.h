#ifndef HERO_H
#define HERO_H
#include <string>      
#include <iostream>    
using namespace std;  

// Hero class declaration
class Hero
{
    string heroName;    // Name of the hero
    int health;         // Current health of the hero
    int basePower;      // Base power of the hero
    public:
    // Parameterized constructor initializes hero with name, health, and base power
    Hero(string n, int h, int b);
    // Destructor called when a Hero object is destroyed
    ~Hero();
    // Getter function to return the hero's name
    string getName() const;
    // Getter function to return the hero's health
    int getHealth() const; 
    // Getter function to return the hero's power
    int getPower() const;
    // Function to reduce the hero's health by a given damage amount
    void takeDamage(int d);
    // Overloaded '>' operator compares two heroes based on base power
    bool operator>(const Hero &h);
    // Overloaded '+' operator adds health of two heroes and returns the result
    int operator+(const Hero &h);
};

#endif