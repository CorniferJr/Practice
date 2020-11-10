#include<iostream>

using namespace std;
int age = 14;

int main(){

    switch(age){
        case 14:
        cout << "You are a High Schooler!\n";
        break;
        case 18:
        cout << "You are a College Student!\n";
        break;
        case 21:
        cout << "You are an adult!\n";
        break;
        default:
        cout << "Nothing special happens:(.\n";
    }
}