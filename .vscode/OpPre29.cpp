#include <iostream>

using namespace std;

int main()
{
//     cout << 20 / 4 * 5 + 10 - 5 << endl; // = 30
//     cout << 10 - 5 + 20 / 4 * 5 << endl; // = 30

    int Num;
    cout << "Guess a Number from 1 to 5\n";
    cin >> Num;

    if (Num == 3) //(Condition Is True)
    {
        cout << "Congratulations Your Guess Is True\n";
    }
    else
    {
         cout << "your guess is wrong\n";
    }

   
   

    return 0;

     
 }