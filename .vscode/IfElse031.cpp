#include <iostream>

using namespace std;

int main()
{
    int age = 16;
    int points = 400;
    int Rank = 7;

    if (age >= 18)
    {
        cout << "Welcome Your Age Is OK.\n";
    }
    else if (points >= 500)
    {
        cout << "Welcome Your points Is OK.\n";
    }
    else if (Rank <= 5)
    {
        cout << "Welcome Your Rank Is OK.\n";
    }
    else
    {
        cout << "I'm Sorry :)\n";

    }
    
    return 0;
    
}