#include<iostream>

using namespace std;

int squareArray[5] = {1, 4, 9, 16, 25};

int main(){
    int numRequest;
    cout << "What perfect square would you like to see?\n";
    cin >> numRequest;
    cout << squareArray[numRequest] << endl;

}