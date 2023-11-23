#include <iostream>

using namespace std;

int main()
{
    int Age;

    cout << "Please enter your Age?\n";
    cin >> Age;

    cout << "Age = " << Age << endl; 

    if (Age >= 18 && Age <= 45)
    {
        cout << "Valid Age\n"; 
    }
    else
    {
        cout << "Invalid Age\n";
    }

}