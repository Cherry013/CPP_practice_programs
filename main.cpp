#include <iostream>
using namespace std;

int main()
{
    string player;
    int level = 0, xp = 100;
    float speed = 4.7;
    int health = 100, damage = 30, healing_potion = 30, e_health = 1000;
    int strength = 75;
    float critical_multilpier = 1.6, damage_output;

    cout << "Enter PLayer name: ";
    cin >> player;

    cout << "\nPlayer: " << player << endl;
    cout << "player level: " << level << endl;
    cout << "required xp: " << xp << endl;
    cout << "Agility: " << speed << endl;

    health -= damage;

    cout << "\nDamage taken remaining health: " << health << endl;
    cout << "taking healing potion";
    health += healing_potion;

    cout << "remaining health: " << health << endl;

    cout << "\nAttacking it with strength: " << strength << endl;
    damage_output = strength * critical_multilpier;
    cout << "Critical strick: -" << damage_output << "hp" << endl;
    e_health -= damage_output;
    cout << "remaing HP for monster: " << e_health << "hp" << endl;

    return 0;
}