/*
    Function
        - Parameters & Arguments
 */

#include <iostream>
using namespace std;

void sayHello(string msg, string name, int age)
{
    cout << msg << " " << name << ",\n";
    cout << name << "\'s Age Is: " << age << "\n";
}

int main()
{
    sayHello("Hello", "Charif", 28);
    sayHello("Hi", "Yassir", 27);
    sayHello("Welcome", "Redouane", 27);

    return 0; 
}