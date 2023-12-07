#include <iostream>

using namespace std;

int main()
{
    int sum = 0;
    int number = 0;    

    for (int i = 1; i <= 5; i++)
    {
        cout << "Enter a number: ";
        cin >> number;

        // continue condition
        if (number > 50)
        {
            cout << "The number is greater than 50 and won't be calculated.\n";
            continue;
        }
        
        sum += number;
    }
    
    cout << "The sum is " << sum << endl;
}