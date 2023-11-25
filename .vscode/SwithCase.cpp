#include <iostream>

using namespace std;


int main()
{
    double Num1, Num2;
    char OpT, Result;
    
    cout << "Please enter your Num1?\n";
    cin >> Num1;
    cout << "Please enter your Num2?\n";
    cin >> Num2;
    cout << "Please enter your OperationType?\n";
    cin >> OpT;

    switch (OpT)
    {
    case '+':
        cout << "Result= " << Num1 + Num2 << endl;
        break;
    
    
    case '-':
        cout << "Result= " << Num1 - Num2 << endl;
        break;
    
    
    case '*':
        cout << "Result= " << Num1 * Num2 << endl;
        break;
    
    
    case '/':
        cout << "Result= " << Num1 / Num2 << endl;
        break;
    
    
    default:
        cout << "Enter your operator type\n";
        break;
    }

}
    