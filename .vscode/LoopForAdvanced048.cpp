

#include <iostream>

using namespace std;

int main()
{
    int nums[] = {100, 200, 300, 400, 500, 600};
    int numsCount = sizeof(nums) / sizeof(nums[0]); // 6

    for (int i = 0; i < numsCount; i++)
    {
        cout << nums[i] << "\n";
    }
    
    // Other Solution 
    int i = 0;
    for (;;)
    {
        cout << nums[i] << endl;
        i++;
        if (i == numsCount)
        {
            break;
        }
        
    }
    return 0;   
}