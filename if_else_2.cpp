#include<iostream>
#include<string>

using namespace std;

string is_greater(int num1, int num2){

if (num1 > num2){
    return " is greater than ";
} 
else if (num1 == num2){
    return " is equal to ";
}
else{
    return " is less than ";
}
}

int main(){
    int a, b;
    cout << "Please enter a value for |a|:";
    cin >> a;
    cout << "Please Enter a value for |b|:";
    cin >> b;
    string result = is_greater(a,b);
    cout << a << result << b;
}