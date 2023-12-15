#include <iostream>

using namespace std;

int main()
{
    // App 1: Award system application
    int num;
        cout << "Enter The Number\n";
        cin >> num;

        switch (num)
        {
        case 100:
        case 110:
        case 120:
            cout << "Congratz For The IPhone\n";
            break;
        case 200:
            cout << "Congratz For The IPad\n";
            break;
        case 300: 
            cout << "Congratz For The TV\n";
            break;
        case 400:
            cout << "Congratz For The KeyChain\n";
            break;

        default:
            cout << "No Award For This Number\n";
            break;
        } 

    // App 2: Discout Application

    int price = 100;
    int discount = 10;
    int years;

    cout << "Type The Number Of Years in Company\n";
    cin >> years;

    switch (years)
    {
    case 1:
        discount = 20;
        break;
    case 2:
        discount = 40;
        break;
    case 3:
        discount = 80;
        break;
    case 4:
        discount = 90;
        break;
    }
        cout << "This Price is: " << price - discount << endl;
    

    // App 3: Simple Calculator

    int n1, n2, op;

    cout << "Enter The Three Numbers\n";
    cin >> n1;
    cin >> n2;

    cout << "[1] +\n";
    cout << "[2] -\n";
    cout << "[3] /\n";
    cout << "[4] *\n";
    cin >> op;

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

    return 0;

}