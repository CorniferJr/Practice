#include<iostream>

using namespace std;

class Animal {
    public:
    void Make_Sound(){
        cout << "oink!\n";

    }
    
    };

int main(){
     Animal pig;
     pig.Make_Sound();
}