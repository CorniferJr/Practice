#include<iostream>

using namespace std;
double x=10;
int main(){
    double x = 11;
    x *=5; // x=x+5
    x /=2; // x=x/2
    x -=10; //etc
    x +-5;
    int y = 5;// can't have same variable in the same curly brackets
    y %= 3; // only works with int, % operator returns remainder
    cout << "local variable " << x << endl;
    cout << "Global Variable " << ::x << endl;
    
    y = 10;
    cout << y++ << endl;
    cout << ++y <<endl;
    //output x
    //increment x


}