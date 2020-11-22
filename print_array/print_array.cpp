#include "print_array.h"
#include <iostream>

using namespace std;

void print_array(int size, int myArray[]){
    for (int i=0; i<size;i++){
        cout << myArray[i] << endl;
    }
}

int main(){
    int arr1[3]={20, 54, 657};
}