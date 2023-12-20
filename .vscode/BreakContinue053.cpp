/*
    Loop
        Break
        Continue
 */

#include <iostream>
using namespace std;

int main()
{
    int nums[] = {10, 20, 30, 40, 50};

    for (int i = 0; i < 5; i++)
    {
        cout << nums[i] << endl;

        if (nums[i] == 10)
        {
            break;
        }
        
        cout << "After\n";

    }
    
}