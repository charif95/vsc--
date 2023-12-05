#include <iostream>

using namespace std;


int main() 
{
    int PINCode, pin = 1234, Attempts = 0;
    double Balance = 7500;

    while (Attempts < 3) 
    {
        cout << "Enter the pin: ";
        cin >> PINCode;

        if (PINCode == pin) 
        {
            cout << "Your Balance is: " << Balance << endl;
            break; 
        }

        else
        {
            Attempts++;
            if (Attempts < 3)
            {
                cout << " Wrong PIN. PLease try again." << endl;
            }
            else
            {
                cout << "Card is locked!" << endl;
            }
            
        }
    }



    return 0;
}


