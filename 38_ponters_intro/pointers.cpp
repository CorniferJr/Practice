#include<iostream>

using namespace std;

int main(){
    int a = 5;
    int *aPointer;
    aPointer - &a;
    cout<< aPointer << endl;
    cout << *aPointer << endl;
    *aPointer -10;
    cout <<aPointer << endl;
    cout<< *aPointer << endl;
    cout << a << endl;
}