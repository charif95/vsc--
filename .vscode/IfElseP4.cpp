#include <iostream>

using namespace std;

int main()
{
    int Age, DriverLicense;

    cout << "Please enter your Age?\n";
    cin >> Age;
    cout << "Please enter your Driver License?\n";
    cin >> DriverLicense;

    if (Age > 21 && DriverLicense == true )
    {
        cout << "Hired\n"; 
    }
    else
    {
        cout << "Rejected\n";
    }

}