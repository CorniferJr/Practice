#include <iostream>
using namespace std;

void whatType(int x){
    cout << "I am printing an int " << x << endl;
}
void whatType(string x){
    cout << "I am printing a string, " << x << endl;
}

int main(){
    int num=6;
    string w = "this is it.";

    whatType(num);
    whatType(w);
}