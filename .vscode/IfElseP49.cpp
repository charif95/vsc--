#include <iostream>

using namespace std;

int main()
{
    int PINCode;

    cout << "Please enter your PIN Code?\n";
    cin >> PINCode;
   

    

    if (PINCode == 1234)
    {
        cout << "Your Balance is: 7500\n"; 
    }
    else
    {
        cout << "Wrong PIN\n";
    }

}