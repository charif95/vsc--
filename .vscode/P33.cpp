#include <iostream>

using namespace std;

int main()
{
    int Grade;

    cout << "Please enter your Grade?\n";
    cin >> Grade;
   

    

    if (Grade >= 90)
    {
        cout << "A\n"; 
    }

    else if (Grade >= 80)
    {
        cout << "B\n";
    }

    else if (Grade >= 70)
    {
        cout << "C\n";
    }

    else if (Grade >= 60)
    {
        cout << "D\n";
    }

    else if (Grade >= 50)
    {
        cout << "E\n";
    }

    else
    {
        cout << "F\n";
    }
 
}