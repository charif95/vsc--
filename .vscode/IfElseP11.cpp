#include <iostream>

using namespace std;

int main()
{
    int Mark1, Mark2, Mark3, Avr;

    cout << "Please enter your Mark?\n";
    cin >> Mark1;
    cin >> Mark2;
    cin >> Mark3;

    Avr = (Mark1 + Mark2 + Mark3) /3;
    
    cout << "Avr = " << Avr << endl; 

    if (Avr >= 50)
    {
        cout << "PASS\n"; 
    }
    else
    {
        cout << "FAIL\n";
    }

}