#pragma oncew
#include <iostream>
#include <string>
using namespace std;

class Fighter{
    private:
    double hp;
    double damage;
    double defense;
    double heal;
    string name;
    string description;
    
    public:
    Fighter(); // Will set all to 0
    Fighter(double hp, double damage, double defense, double heal, string); //Will set all respectively
    bool is_alive();
    void take_damage(double incomingDamage);
    double get_damage();
    void boost_defense();
    void display_statistics();
    void heal_self();
};
