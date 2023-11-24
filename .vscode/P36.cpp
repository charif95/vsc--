#include <iostream>

using namespace std;

int main()
{
    double Num1, Num2;
    char OpT;

    cout << "Please enter your Num1?\n";
    cin >> Num1;
    cout << "Please enter your Num2?\n";
    cin >> Num2;
    cout << "Please enter your OperationType?\n";
    cin >> OpT;

   
    if (OpT == '+')
    {
        cout << Num1 + Num2 << endl;
    }

    else if (OpT == '-')
    {
        cout << Num1 - Num2<< endl;
    }

    else if (OpT == '/')
    {
        cout << Num1 / Num2 << endl;
    }

    else if (OpT == '*')
    {
        cout << Num1 * Num2<< endl;
    }

    else
    {
        cout << "Error\n";
    }
 
}