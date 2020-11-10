#include <iostream>
using namespace std;

double area(double radius=1);
int main(){
    cout << area();
}
double area(double radius){
    return 3.14*(radius*radius);
}