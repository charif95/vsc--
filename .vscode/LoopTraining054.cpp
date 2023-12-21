/*
    Loop
        For => Specific Number of Loops
        While => Loop As Long Condition Is True
        Do While => Always Execute Once

    Create Three Apps 
        Count Positive & Even Numbers Only
        Guess The Number
        Reversed Elements From User
 */


#include <iostream>
using namespace std;

int main()
{
    // Count Positive & Even Numbers Only
    int result = 0;
    int nums[] = {10, 20, -20, 13, 30, -30, 40};
    int numsSize = size(nums); // 7

    for (int i = 0; i < numsSize; i++)
    {
        if (nums[i] > 0 && nums[i] % 2 == 0)
        {
            result += nums[i];
        }
        
    }
    
    cout << "Result Is: " << result << endl;


    // Guess The Number

    int guessNmber = 7;
    int guessTries = 0;
    int choose;
    cout << "Please Guess The Number Between 1 & 10\n";
    while (true)
    {
        cin >> choose; 
        if (choose == guessNmber)
        {
            cout << "Graet, Correct Guess\n";
            break;
        }
        else
        {
            cout << "Sorry, Wrong Guess\n";
            guessTries++;
        }
        if (guessTries == 3)
        {
            cout << "Sorry, You Failed. The Number Is: " << guessNmber << "\n";
            break;
        }
        
    }
    
    // Reversed Elements From User

    int vals[5];
    int inp;
    cout << "Type 5 Numbers To Reverse\n";

    // [0, 1, 2, 3, 4]

    for (int  i = 4; i > -1; i--)
    {
        cin >> inp;
        vals[i] = inp;
    }

    cout << "\n=====================\n";

    for (int  i = 0; i < 5; i++)
    {
        cout << vals[i] << "\n";
    }
    
    

    return 0;
}
