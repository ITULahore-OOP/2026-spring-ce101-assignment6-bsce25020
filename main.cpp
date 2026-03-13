#include "Hero.h"
#include "Warrior.h"
#include "Knight.h"
#include "MagicalEntity.h"
#include "SpellBlade.h"
#include "Guild.h"
#include <iostream>
using namespace std;

int main() {
    string nameOfGuild;
    cout << "Enter Guild name: ";
    cin >> nameOfGuild;
    Guild myGuild(nameOfGuild); 
    int choice;
    
    do 
    {
        cout << endl << "    Guild Management Menu  " << endl;
        cout << "1. Create Hero" << endl;
        cout << "2. Create Warrior" << endl;
        cout << "3. Create Knight" << endl;
        cout << "4. Create SpellBlade" << endl;
        cout << "5. Display Guild Stats" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        if(choice == 1) 
        {
            string name;
            int health, power;
            cout << "Enter Hero name: ";
            cin >> name;
            cout << "Enter health: ";
            cin >> health;
            cout << "Enter base power: ";
            cin >> power;

            Hero* h = new Hero(name, health, power); // Dynamically create Hero
            myGuild += h; // Add Hero to guild

        } 
        else if(choice == 2) 
        {
            string name;
            int health, power, armor;
            cout << "Enter Warrior name: ";
            cin >> name;
            cout << "Enter health: ";
            cin >> health;
            cout << "Enter base power: ";
            cin >> power;
            cout << "Enter armor rating: ";
            cin >> armor;

            Warrior* w = new Warrior(name, health, power, armor); // Dynamically create Warrior
            myGuild += w; // Add Warrior to guild

        } else if(choice == 3) 
        {
            string name;
            int health, power, armor, charge;
            cout << "Enter Knight name: ";
            cin >> name;
            cout << "Enter health: ";
            cin >> health;
            cout << "Enter base power: ";
            cin >> power;
            cout << "Enter armor rating: ";
            cin >> armor;
            cout << "Enter charge bonus: ";
            cin >> charge;

            Knight* k = new Knight(name, health, power, armor, charge); // Dynamically create Knight
            myGuild += k; // Add Knight to guild

        } 
        else if(choice == 4) 
        {
            string name;
            int health, power, armor, mana, spellPower;
            cout << "Enter SpellBlade name: ";
            cin >> name;
            cout << "Enter health: ";
            cin >> health;
            cout << "Enter base power: ";
            cin >> power;
            cout << "Enter armor rating: ";
            cin >> armor;
            cout << "Enter mana pool: ";
            cin >> mana;
            cout << "Enter spell power: ";
            cin >> spellPower;

            SpellBlade* sb = new SpellBlade(name, health, power, armor, mana, spellPower); // Dynamically create SpellBlade
            myGuild += sb; // Add SpellBlade to guild

        } 
        else if(choice == 5) 
        {
            myGuild.displayGuildStats();
        }
        else if(choice == 6) 
        {
            cout << "Exiting program." << endl;
        } 
        else 
        {
            cout << "Invalid choice! Try again." << endl;
        }
    } while(choice != 6);

    return 0;
}