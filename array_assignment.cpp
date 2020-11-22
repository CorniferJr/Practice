#include<iostream>

using namespace std;

double doubleArray[20];

int main(){
    for(int i=0; i<21; i++);{
        doubleArray[i] = 10.0 * double(i);
        cout << doubleArray[i] << endl;
    }
}