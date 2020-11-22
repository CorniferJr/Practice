#include<iostream>

using namespace std;

void passByValue(int val) {
    cout << "pass by value before" << val <<endl;
    val = 99;
}


void passByReference(int& val) {
    cout << "pass by value before" << val <<endl;
    val = 99;
}


void passByPointer(int* valPointer) {     //Reference: extract a value at the pointers location in memory
    cout << "pass by value before" << *valPointer <<endl;
    *valPointer = 98;
}

int main(){
    int a = 1;
    int b = 2;
    int c = 3;
    passByValue(a);
    cout << a << endl;
    passByReference(b);
    cout << b << endl;
    passByPointer(&c);
    cout << c << endl;

}