/*
    Function
        - DRY
        - User Defined and Build-In
        - Syntax

    returnDataType functionName(Param1, Param2, Param3)
    {
        // Function Body Contain Block Of Code
    }

        - Example
        - Why We Use Functions
        - Declare A Function And Call It
 */

#include <iostream>
using namespace std;

// Declare Function
void sayHello()
{
    cout << "Hi Charif.\n";
    cout << "Hi Ayoub.\n";
}

int main()
{
    
    cout << "Hi Redouane.\n";
    sayHello();
    cout << "Hi Yassir.\n";
    return 0;
}