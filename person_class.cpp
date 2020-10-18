#include<iostream>
#include<string>

using namespace std;

class Person{
    public:
    Person(string initial_name){
      name=initial_name;
    }
    string Get_Name(){
        return name;

    }
    void set_name(string newName) {
        name =newName;

    }
    private:
    string name;

};
int main(){
    Person jim("Jim bob");
    cout << jim.Get_Name() << "\n";
    jim.set_name("Jim");
    cout << jim.Get_Name() << "\n";
}