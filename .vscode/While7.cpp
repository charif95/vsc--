#include <iostream>

using namespace std;


int main() 
{
    int number;
    int sum = 0;

    cout << "Enter numbers to sum (Enter -99 to stop):\n";

    while (true) 
    {
        cout << "Enter a number: ";
        cin >> number;

        if (number == -99) 
        {
            break;
        }
        sum += number;
    }

    cout << "The sum of the numbers is: " << sum << endl;

    return 0;
}
