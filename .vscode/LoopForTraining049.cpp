/*
    Loop
        Loop For Advanced Trainings
*/


#include <iostream>
using namespace std;

int main()
{
    int nums[] = {100, 200, 300, 400, 500, 600, 700};
    int numsSize = sizeof(nums) / sizeof(nums[0]);

    // Method 1
    // for (int i = 0; i < numsSize; i += 2)
    // {
    //     cout << nums[i] << "\n";
    
    // }

    // Method 2
    // for (int i = 0; i < numsSize; i++)
    // {
    //     cout << nums[i] << "\n";
    //     i++;
    // }
    // 100, 300, 500
    
    // for (int i = numsSize - 1; i > 1; i--)       
    // {
    //     cout << nums[i] << "\n";
    
    // }
    // 600, 500, 400, 300

    // for (int i = numsSize -2; i > 1; i--)
    // {
    //     cout << nums[i] << "\n";
    
    // }
    // // 600, 500, 400, 300

    // Method 3 (600, 500, 400, 300)

    int i = numsSize -2;

    for (;;)
    {
        cout << nums[i] << "\n";
        i--;
        if (i == 1) // < or >  =>  condition ==
        {
            break;
        }
        
    }

    return 0;
}
