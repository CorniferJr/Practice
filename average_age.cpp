#include<iostream>

using namespace std;

float average_age(){
   
    float totalAge;
    float individualAge;
    float totalPeople;
   
    while(true){

    cout << "Input single age\n";
    cin >> individualAge;
    if(individualAge <= 0){
        break;
     }
    totalAge += individualAge;
    totalPeople++;
    
    }
    
    cout << "\n";
    cout << totalAge/totalPeople << endl;
    return totalAge/totalPeople;
}

int main(){
    average_age();
}