/*
    Loop
        Loop With While

        Syntax
        while (Condition Is True)
        {

        }
*/

#include <iostream>
using namespace std;

int main()
{
    /* for (int i = 0; i < 5; i++)
    {
        cout << i << "\n";
    } */

    // While 
   /*  int i = 0;
    while (i < 5)
    {
        cout << i << "\n";
        i++;
    } */

    // Other Methode
    int i = 0;
    while (i < 5)
    {
        cout << i << "\n";
        if (i == 2) 
        {
            break;
        }
        i++;
    }
    
}