/*
    Loop
      Loop With For
      Loop On Array
    syntax
    for(init, Condition, Update)
    {
        // Block Of Code
    }
*/

#include <iostream>

using namespace std;

int main()
{
    int num = 0;
    cout << num << "\n";
    num++;
    cout << num << "\n";
    num++;
    cout << num << "\n";
    num++;
    cout << num << "\n";
    num++;
    cout << num << "\n";
    num++;
    cout << num << "\n";
    num++;

    for (int i = 0; i < 6; i++)
    {
        cout << i << "\n";
    }

    int nums[4] = {100, 200, 300, 400}; // 100 or 200 is the index 

    cout << nums[0] << "\n";
    cout << nums[1] << "\n";
    cout << nums[2] << "\n";
    cout << nums[3] << "\n";

    for (int index = 0; index < 4; index++)
    {
        cout << nums[index] << "\n";
    }
    
    
}