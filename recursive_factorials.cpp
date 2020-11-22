#include<iostream>
using namespace std;

int x;
int factorialReturn(int x){
    if(x == 1){
        return 1;
    }
    else{
        return x*factorialReturn(x-1);
    }
}
 
 int main(){
    cout << "Please enter an integer: ";
    cin >> x;
    cout << endl;
    cout << factorialReturn(x) << endl;
 }