/*
    Function
        Parameters & Arguments Training
            Create Ice Box
            Simple Calculator
 */

#include <iostream>
using namespace std;

void iceBox(string item)
{
    if (item == "Orange")
    {
        cout << item << " Will Be More Cold\n";
    }
    else if (item == "Apple" || item == "Juice")
    {
        cout << item << " Will Be More Fresh\n";
    }
    else
    {
        cout << item << " Is Invalid\n";
    }
}



void calc(int numOne, int numTwo, string op)
{
    

        if (op == "+")
        {
            cout << numOne + numTwo << endl;
        }
        else if (op == "-")
        {
            cout << numOne - numTwo << endl;
        }
        else if (op == "*")
        {
            cout << numOne * numTwo << endl;
        }
        else if (op == "/")
        {
            cout << numOne / numTwo << endl;
        }
        else
        {
            cout << "Operation Is Not Valid\n";
        }

//     cout << numOne << " + " << numTwo << " =";
//     cout << numOne + numTwo << "\n";
}

void result(int n1, int n2, int op)
{

    switch (op)
    {
    case 1:
        cout << n1 << " + " << n2 << " = " << n1 + n2 << endl;
        break;
    case 2:
        cout << n1 << " - " << n2 << " = " << n1 - n2 << endl;
        break;
    case 3:
        cout << n1 << " / " << n2 << " = " << n1 / n2 << endl;
        break;
    case 4:
        cout << n1 << " * " << n2 << " = " << n1 * n2 << endl;
        break;
        
    default:
        cout << "Operation Is Not Valide\n";
        break;
    }

    /* switch (op)
    {
    case 1:
         cout << n1 << " + " << n2 << " = " << n1 + n2 << endl;
        break;
    case 2:
         cout << n1 << " - " << n2 << " = " << n1 - n2 << endl;
        break;
    case 3:
         cout << n1 << " * " << n2 << " = " << n1 * n2 << endl;
        break;
    case 4:
         cout << n1 << " / " << n2 << " = " << n1 / n2 << endl;
        break;
    
    default:
        cout << "Operation Is Not Valide\n";
        break;
    }
 */
}
int main()
{
    iceBox("Orange");
    iceBox("Apple");
    iceBox("Juice");
    iceBox("TV Remote");

    calc(10, 90, "*"); // 900
    
    result(20, 10, 1);
    
    return 0;
}