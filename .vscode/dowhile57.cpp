#include <iostream>

using namespace std;

int ReadIntNumberInRangeUsingWhile(int From, int To)
{
    int Number;
    cout << "Please enter a number between " << From << " and " << To << endl;
    cin >> Number;

    while (Number < From || Number > To)
    {
        cout << "Wrong Number,\n";
        cout << "Please enter a number between " << From << " and " << To << endl;
        cin >> Number;
    }

    return Number;
    
}

int ReadIntNumberInRangeUsingDoWhile(int From, int To)
{
    int Number;
    do
    {
        cout << "Please enter a number between " << From << " and " << To << endl;
        cin >> Number;
    } while (Number < From || Number > To);
    
    return Number;
}

int main()
{
    int result1 = ReadIntNumberInRangeUsingWhile(18,45);
    int result2 = ReadIntNumberInRangeUsingDoWhile(18,45);
    cout << "The number you entered is " << result1 << endl;
    // cout << "The number you entered is " << result2 << endl;

}