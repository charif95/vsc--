#include <iostream>

using namespace std;

int main()
{
    int Day;
    

    cout << "Please enter Day?\n";
    cin >> Day;

   
    if (Day == 1)
    {
        cout << "Sunday" << endl;
    }

    else if (Day == 2)
    {
        cout << "Monday" << endl;
    }

    else if (Day == 1)
    {
        cout << "Tuesday" << endl;
    }

    else if (Day == 4)
    {
        cout << "Wednesday" << endl;
    }

    else if (Day == 5)
    {
        cout << "Thursday" << endl;
    }

    else if (Day == 6)
    {
        cout << "Friday" << endl;
    }

    else if (Day == 7)
    {
        cout << "Saturday" << endl;
    }

    else
    {
        cout << "Wrong Day, enter the day again?\n";
    }
 
}