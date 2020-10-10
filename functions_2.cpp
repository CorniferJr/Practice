#include <iostream>
#include <string>

using namespace std;


string return_something(){
    string message = "Hello young one.";
    return message;
}

int main(){
   string message = return_something(); 
   cout << message << endl;
}