#include <iostream>
#include <string>
#include "Fighter.h"
using namespace std;

int main(){
    Fighter creature_one(50.0, 30.0, 10.0, 5.0,"Ratatat" );
    Fighter creature_two(200.0, 60.0, 10.0, 30.0,"Lunala");
    int optionNumber;

    while(true){
        cout << "USER 1 \n\n";
        creature_one.display_statistics();

        cout << "What would you like to do?\n";
        cout << "1: Attack\n";
        cout << "2: Boost Defense\n";
        cout << "3: Heal\n";
        cout << "Select Option:";
        cin >> optionNumber;
        if(optionNumber == 1){
            creature_two.take_damage(creature_one.get_damage());
        }
        else if(optionNumber == 2){
            creature_one.boost_defense();
        }
        else if(optionNumber == 3){
            creature_one.heal_self();
        }
        else{
            cout << "The creature doesn't knowwhat to do!\n";
            cout << "It hit itself in confusion!\n";
            creature_one.take_damage(creature_one.get_damage());
        }
        if(creature_one.is_alive() == false){
            cout << "\n\nUSER 2 has won!\n\n";
            break;
        }
        if(creature_two.is_alive() == false){
            cout << "\n\nUSER 1 has won!\n\n";
            break;
        }


            cout << "\nUSER 2 \n\n";
            creature_two.display_statistics();

        cout << "What would you like to do?\n";
        cout << "1: Attack\n";
        cout << "2: Boost Defense\n";
        cout << "3: Heal\n";
        cout << "Select Option:";
        cin >> optionNumber;
        if(optionNumber == 1){
            creature_one.take_damage(creature_two.get_damage()*0.75);
        }
        else if(optionNumber == 2){
            creature_two.boost_defense();
        }
        else if(optionNumber == 3){
            creature_two.heal_self();
        }
        else{
            cout << "The creature doesn't knowwhat to do!\n";
            cout << "It hit itself in confusion!\n";
            creature_two.take_damage(creature_two.get_damage()* 0.75);
        }
          if(creature_one.is_alive() == false){
            cout << "\n\nUSER 2 has won!\n\n";
            break;
        }
        if(creature_two.is_alive() == false){
            cout << "\n\nUSER 1 has won!\n\n";
            break;
        }
    }
}