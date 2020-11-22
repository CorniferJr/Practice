#include<iostream>

using namespace std;

const int rowsV=4;
const int columnsV=3;
int nested [rowsV][columnsV] = {
    {1, 2, 3},    
    {4, 5, 6},    //Think of matricies
    {7, 8, 9},
    {123, 456, 789} };
int main(){
    for (int row =0; row < rowsV;row++){
         for (int col =0; col< columnsV;col++){
            cout << nested[row][col] ;
        }
        cout << endl;
    }
}