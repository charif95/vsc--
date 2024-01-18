#include <array>
#include <iostream>


using namespace std;

int main()
{
    /* // Assignment 01
    int nums[]{100, 300, 600, 900};

    string awards[]{"iPhone", "iPad", "PC", "Car"};

    cout << "Number " << nums[0] << " Award Is: " << awards[0] << endl;
    cout << "Number " << nums[1] << " Award Is: " << awards[1] << endl;
    cout << "Number " << nums[2] << " Award Is: " << awards[2] << endl;
    cout << "Number " << nums[3] << " Award Is: " << awards[3] << endl; */

    // cout <<"\n============================================\n\n";

    // Assignment 02
/* 
    int check = 25;
    int nums[]{40, 20, 30, 70, 100};

    if (nums[0] > check)
    {
        cout << nums[0] + nums[3] << "\n"; // 110
    } */

   /*  int check = 25;
    int nums[]{20, 35, 30, 70, 100};

    if (nums[1] > check)
    {
        cout << nums[1] + nums[3] << "\n"; // 105
    } */
    
    /* int check = 25;
    int nums[]{20, 25, 30, 70, 100};

    if (nums[2] > check)
    {
        cout << nums[2] + nums[3] << "\n"; // 100
    } */

      // cout <<"\n============================================\n\n";

    // Assignment 03

    /* int filling = 10;
    int vals[]{100, 200, 300, 400}; */

    // int vals[4] = {100, 200, 300, 400}; =>>  C-Style Array 

    // Write One Line Of Code Here To Fill Array Value With Number 10

    /* array<int, 4> vals = {100, 200, 300, 400};

    cout << vals[0] << "\n"; 
    cout << vals[1] << "\n"; 
    cout << vals[2] << "\n"; 
    cout << vals[3] << "\n";

    vals.fill(10);
    cout << vals[0] << "\n"; //10
    cout << vals[1] << "\n"; //10
    cout << vals[2] << "\n"; //10
    cout << vals[3] << "\n"; //10  */

    // cout <<"\n============================================\n\n";

    // Assignment 04

    /* int vals[]{100, 200, 250, 400, 200};

    if (vals[0] + vals[4] > vals[2])
    {
        cout << "First Number + Last Number Is Large Than Middle Number\n";
        cout << vals[0] << " + " << vals[4] << " = " << vals[0] + vals[4] << endl;
        cout << vals[0] + vals[4] << " > " << vals[2] << "\n";
    } */

    /* int vals[]{100, 200, 500, 400, 200};

    if (vals[0] + vals[4] > vals[2])
    {
        cout << "First Number + Last Number Is Large Than Middle Number\n";
        cout << vals[0] << " + " << vals[4] << " = " << vals[0] + vals[4] << endl;
        cout << vals[0] + vals[4] << " > " << vals[2] << "\n";
    }
    else if (vals[1] + vals[3] > vals[2])
    {
        cout << " Second Number + Before Last Number Is Larger Than Middle Number\n";
        cout << vals[1] << " + " << vals[3] << " = " << vals[1] + vals[3] << endl;
        cout << vals[1] + vals[3] << " > " << vals[2] << "\n";
    } */

    /* int vals[]{100, 200, 600, 400, 200};

    if (vals[0] + vals[4] > vals[2])
    {
        cout << "First Number + Last Number Is Large Than Middle Number\n";
        cout << vals[0] << " + " << vals[4] << " = " << vals[0] + vals[4] << endl;
        cout << vals[0] + vals[4] << " > " << vals[2] << "\n";
    }
    else if (vals[1] + vals[3] > vals[2])
    {
        cout << " Second Number + Before Last Number Is Larger Than Middle Number\n";
        cout << vals[1] << " + " << vals[3] << " = " << vals[1] + vals[3] << endl;
        cout << vals[1] + vals[3] << " > " << vals[2] << "\n";
    }
    else
    {
        cout << "Middle Number Is The Largest\n";
        cout << vals[2] << "\n";
    } */

    /* cout <<"\n============================================\n\n";

    // Assignment 05

    int vals[] = {100, 200, 600, 200, 100};

    int size = sizeof(vals) / sizeof(vals[0]);

    bool isPalindrome = true;

    for (int i = 0; i < size / 2; ++i) {

        if (vals[i] != vals[size - 1 - i]) 
        {
            isPalindrome = false;
            break;
        }
    }

    if (isPalindrome) {
        cout << "Array Is Palindrome" << endl;
    } else {
        cout << "Array Is Not Palindrome" << endl;
    } */

    /* cout <<"\n============================================\n\n";

    int vals[] = {100, 200, 200, 100};

    int size = sizeof(vals) / sizeof(vals[0]); 

    bool isPalindrome = true;

    for (int i = 0; i < size / 2; i++)
    {
        if (vals[i] != vals[size - 1 - i])
        {
            isPalindrome = false;
            break;
        }
        
    }
    if (isPalindrome)
    {
        cout << "Array Is Palindrome" << endl;
    }
    else
    {
        cout << "Array Is Not Palindrome" << endl;
    } */
    
    /* cout <<"\n============================================\n\n";

    int vals[] = {100, 300, 600, 200, 100}; 

    int size = sizeof(vals) / sizeof(vals[0]); 

    bool isPalindrome = true;

    for (int i = 0; i < size / 2; i++)  // i = 0 i <= 2
    {
        if (vals[i] != vals[size - 1 - i]) // 5 - 1 - 1
        {
            isPalindrome = false;
            break;
        }
        
    }
    if (isPalindrome)
    {
        cout << "Array Is Palindrome" << endl;
    }
    else
    {
        cout << "Array Is Not Palindrome" << endl;
    } */

    /* cout <<"\n============================================\n\n";

    // Assignment 06

    int vals[] = {10, 20, 30};

    vals[0] = 100;
    vals[1] = 200;
    vals[2] = 300;

    cout << vals[0] << "\n"; // 100
    cout << vals[1] << "\n"; // 200
    cout << vals[2] << "\n"; // 300 */

    /* cout <<"\n============================================\n\n";

    // Assignment 07

    string Name[3][3] = {{"Ahmed", "Omar", "Malika"}, {"Charif", "Mahdy", "Yassir"}, {"Redone", "Ayub", "Majed"}};
    cout << "First Collection Of Names: \n";
    cout << Name[0][0] << "\n"; // Ahmed
    cout << Name[1][1] << "\n"; // Mahdy
    cout << Name[2][2] << "\n"; // Majed */

    /* cout <<"\n============================================\n\n";

    string Name[3][3] = {{"Ahmed", "Omar", "Mahmoud"}, {"Charif", "Mahdy", "Gamal"}, {"Redone", "Adil", "Majed"}};
    cout << "Second Collection Of Names: \n";
    cout << Name[2][1] << "\n"; // Adil
    cout << Name[1][2] << "\n"; // Gamal
    cout << Name[0][2] << "\n"; // Mahmoud */

    /* cout <<"\n============================================\n\n";

    string Name[3][3] = {{"Ahmed", "Sayed", "Mahmoud"}, {"Sameh", "Mahdy", "Gamal"}, {"Mohamed", "Adil", "Majed"}};
    cout << "Third Collection Of Names: \n";
    cout << Name[0][1] << "\n"; // Sayed
    cout << Name[1][0] << "\n"; // Sameh
    cout << Name[2][0] << "\n"; // Mohamed */

    /* cout <<"\n============================================\n\n";

    // Assignment 08

    array<int, 3> nums = {100, 200, 300};
    nums.fill(100);
    cout << nums[0] << "\n"; // 100
    cout << nums[1] << "\n"; // 100
    cout << nums[2] << "\n"; // 100 */

    /* cout <<"\n============================================\n\n";

    // Assignment 09

    int nums[] = {10, 20, 30, 40, 20, 50};

    // Method 1
    cout << sizeof(nums) / sizeof(nums[0]) << "\n"; // 6
    
    // Method 2
    cout << end(nums) - begin(nums)  << "\n"; // 6

    // Method 3
    cout << size(nums) << "\n"; // 6 */

    /* cout <<"\n============================================\n\n";

    // Assignment 10

    array<int, 6> nums = {10, 20, 30, 40, 20, 50};
    
    // Method 1
    cout << "First: " << nums[0] << endl; // 10
    cout << "First: " << nums[5] << endl; // 50

    // Method 2
    cout << "First: " << nums.front() << endl; // 10
    cout << "First: " << nums.back() << endl; // 50

    // Method 3
    cout << "First: " << nums.at(0) << endl; // 10
    cout << "First: " << nums.at(5) << endl; // 50 */

    /* cout <<"\n============================================\n\n";

    // Assignment 11

    int index = 1;
    array<int, 3> oldNums = {10, 20, 30};
    array<int, 3> newNums;

    for (int i = 0; i < oldNums.size() ; i++)
        newNums[i] = oldNums[oldNums.size() - 1 - i];

    cout << newNums[0] << "\n"; // 30
    cout << newNums[1] << "\n"; // 20
    cout << newNums[2] << "\n"; // 10 */

    cout <<"\n============================================\n\n";

    // Assignment 12

    int nums[] = {1, 2, 3, 5};
    int vals[] = {10, 20, 40, 30, 10, 60};
    int i1 = nums[3];
    int i2 = nums[0];
    int i3 = nums[1];
    int i4 = nums[2];

    int result = vals[i1] + vals[i2] + vals[i3] + vals[i4];
    cout << "Result: " << result << endl;

    cout << vals[i1] << "\n"; 
    cout << vals[i2] << "\n"; 
    cout << vals[i3] << "\n"; 
    cout << vals[i4] << "\n"; 
    cout << nums[3] << "\n"; 
    cout << nums[0] << "\n"; 
    cout << nums[1] << "\n"; 
    cout << nums[2] << "\n"; 

    cout <<"\n============================================\n\n";

    // Assignment 13

    string fName = "Elzero ";
    string mName = "Web ";
    string lName = "School";

    cout << "Elzero ";
    cout << "Web ";
    cout << "School";

    cout << "\nElzero Web School \n";
    cout << fName + mName + lName << "\n";



    return 0;
}