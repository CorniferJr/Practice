#include <iostream>
#include <string>
#include <algorithm>
#include "Fighter.h"
using namespace std;

Fighter::Fighter(){
    hp=0.0;
    damage=0.0;
    defense=0.0;
    heal=0.0;
    name="DEFAULT";
}

Fighter::Fighter(double healthValue, double damageValue, double defenseValue, double healValue, string nameString){
    hp=healthValue;
    damage=damageValue;
    defense=defenseValue;
    heal=healValue;
    name=nameString;

}

bool Fighter::is_alive(){
    if (hp>0.0){
        return true;
    }
    else {
        return false;
    }
}

void Fighter::take_damage(double incomingDamage){
    hp -= max((incomingDamage-defense),1.0);
}

double Fighter::get_damage(){
    return damage; 
}

void Fighter::boost_defense(){
    defense += (1.0 + (rand()% 10));
}

void Fighter::display_statistics(){
    cout << "My name is' " << name << endl << "My current health is " << hp << endl << "My defense is " << defense << endl;
}

void Fighter::heal_self(){
    hp+=(heal + (rand()% 10));
}