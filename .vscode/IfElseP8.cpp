#include <iostream>

using namespace std;

int main()
{
    int Mark;

    cout << "Please enter your Mark?\n";
    cin >> Mark;

    if (Mark >= 50)
    {
        cout << "PASS\n"; 
    }
    else
    {
        cout << "Fail\n";
    }

}