/*
    Control Flow 
        Ternary Operator

    syntax
    (Condition Is True) ? True : false;
*/

#include <iostream>

using namespace std;

int main()
{
    int age = 13;

    if (age >= 18)
    {
        cout << "Your Age Is OK\n";
    }
    else
    {
        cout << "Your Age Is Not OK\n";
    }

    // Ternary Operator 

    cout << (age >= 18 ? "Your Age Is OK\n" : "Your Age Is Not OK\n");

    string msg = age >= 18 ? "Your Age Is OK\n" : "Your Age Is Not OK\n";

    cout << msg;


    return 0;
}