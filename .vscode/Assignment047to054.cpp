#include <iostream>

using namespace std;

int main()
{
    // Assignment 01

    /* int  i;

    for (int i = 0; i < 11; i++)
    {
        cout << i << endl;
    } */

    // While (Condition Is true)

    /* int i = 0;

    while (i < 11)
    {
        cout << i << "\n";
        i++;
    } */

    // Do While
    
    /* int i = 0;

    do
    {
        cout << i << "\n";
        i++;
    } while (i < 11); */

    /* cout <<"\n============================================\n\n";

    // Assignment 02 */

    /* int index = 2;

    for (;;)
    {
        cout << index << "\n"; // From 2 To 10
        index++;
        if (index > 8)
        {
            break;
        }  
    } */

    /* cout <<"\n============================================\n\n";

    // Assignment 03
    
    
    int num1, num2;

        cout << "Please Enter the Num1? \n";
        cin >> num1; // 1
        cout << "Please Enter the Num2? \n";
        cin >> num2; // 9

        for (int i = num1 + 1; i < num2; i++)
        {
            if (i % 2 != 0 )
            {
                cout << i << "\n"; // 3, 5, 7
            }
        } */
        
    /* cout <<"\n============================================\n\n";

    int N1, N2;

        cout << "Please Enter the N1? \n";
        cin >> N1; // 2
        cout << "Please Enter the N2? \n";
        cin >> N2; // 15

        for (int i = N1; i < N2; i++)
        {
            if (i % 2 != 0 )
            {
                cout << i << "\n"; // 3, 5, 7, 9, 11, 13
            }
        } */


    /* cout <<"\n============================================\n\n";

        int num1, num2;

        cout << "Please Enter the Num1? \n";
        cin >> num1; // 8
        cout << "Please Enter the Num2? \n";
        cin >> num2; // 2

        for (int i = num2; i < num1; i++)
        {
            if (i % 2 != 0 )
            {
                cout << i << "\n"; // 3, 5, 7
            }
        } */

        // cout <<"\n============================================\n\n";

        // Assignment 04

        /* for (int i = 0; i < 19; i +=2)
        {
                cout << i << endl;
        } */

        /* int i = 0;
        while (i < 19)
        {   
            cout << i << endl; 
            i +=2;
        } */
        

        /* cout <<"\n============================================\n\n";

        // Assignment 05

        for (int i = 0; i < 28; i += 3)
            {
                cout << i << endl;
            } */

        /* cout <<"\n============================================\n\n";
        
        int j = 0;
        
        while (j < 28)
        {
            cout << j << endl;
            j += 3;
        } */

        // cout <<"\n============================================\n\n";

        // Assignment 06

        /* for (int i = 10; i <= 100000000; i *= i) 
        {
            cout << i << endl;
        } */

        /* int j = 10;
        
        while (j <= 100000000)
        {
            cout << j << endl;
            j *= j;
        }  */

    /* cout <<"\n============================================\n\n";

        // Assignment 07

        for (int i = 2; i <= 128; i += i) 
        {
            cout << i << endl;
        } */

        /* cout <<"\n============================================\n\n";

        int j = 2;
        
        while (j <= 128)
        {
            cout << j << endl;
            j += j;
        } */

        /* cout <<"\n============================================\n\n";

        // Assignment 08

        /* for (int i = 2; i <= 126; i*=2)
        {
            cout << i << endl;
            i++;
        } 

        int j = 2;
        while (j <= 126)
        {
            cout << j << endl;
            j++;
            j*=2;
        } */
        
        // cout <<"\n============================================\n\n";

        // Assignment 09

        //  string friends[] = {"Ahmed", "Mohamed", "Sayed", "Gamal"};

        /* for (int i = 1; i < 3; i++)
        {
            cout << friends[i] << endl;
        } */
        /* cout <<"\n============================================\n\n";

        int i = 1;
        while (i < 3)
        {
            cout << friends[i] << endl;
            i++;
        }  */

        /* cout <<"\n============================================\n\n";

        // Assignment 10

        // Friends Array

        string friends[] = {"Ahmed", "Mohamed", "ameer", "Ashraf", "Amany"};

        for (int i = 0; i < 5; ++i) 
            {
            if (friends[i][0] == 'A') 
                {
                    cout << friends[i] << endl;
                }
            }

        int i = 0;
        while (i < 5)
        {
            if (friends[i][0] == "A")
            {
                cout << friends[i] << endl;
            }
            i++;
        } */

        /* cout <<"\n============================================\n\n";
        // Assignment 11

        string friends[] = {"Ahmed", "Osama", "Ameer"};

        cout << "= " << friends[0] << " =" << endl;

        cout << "== ";
        for (char A : friends[0])
        {
            cout << A << ", ";
        }
        cout <<"=";

        cout <<"\n============================================\n\n";

        cout << "= " << friends[1] << " =" << endl;

        cout << "== ";
        for (char B : friends[1])
        {
            cout << B << ", ";
        }
        cout <<"=";

        cout <<"\n============================================\n\n";

        cout << "= " << friends[2] << " =" << endl;

        cout << "== ";
        for (char C : friends[2])
        {
            cout << C << ", ";
        }
        cout <<"="; */

       /*  cout <<"\n============================================\n\n";
        // Assignment 12
        int nums[] = {10, 20, 14, 28, 40, 80, 15, 30};
        int numsCount = sizeof(nums) / sizeof(nums[0]);  
        for (int i = 0; i < 7; i++)
        {
            cout << nums[i] << "\n";
            i++;
        } */

        /* cout <<"\n============================================\n\n";

        // Assignment 13

        int A=30;
                
         for (int i = 10; i > 0; i--)
        {
            int B = A;
            cout << B  << "\n";  
            B = B-3;
            A = B;
            
        } 
        

         for (int A = 30; A > 0; A-=3)
        {  
            cout << A  << "\n";   
        } 

        for (int A = 30; A > 0; A-=3)
        {
            if (A % 2 != 0)
            {
                cout << A  << "\n";
            }  
        } */

        /* cout <<"\n============================================\n\n";

        // Assignment 14
        
        int num = 2;
        while (num < 520)
        {
            cout << num - 1 << endl;
            num = 2 * num + 1;
        } */

        /* cout <<"\n============================================\n\n";

        // Assignment 15

        int help_num = 4;
        int numsl[] = {2, 4, 5, 6, 10};
    
        int size = sizeof(numsl) / sizeof(numsl[0]);

        // cout << sizeof(numsl) / sizeof(numsl[0]) << endl; // 5

        for (int i = 0; i < size; ++i) 
        {
            int index1 = i;
            int index2 = (size - i - 1);

            cout << numsl[index1] << " + " << numsl[index2] << " = " << numsl[index1] + numsl[index2] << endl;

            // cout << numsl[index2]<< endl; just explaining
        } */

        /* cout <<"\n============================================\n\n";

        // Assignment 16

        int index = 10;
        int jump = 2;
    
        for (;;)
        {

            cout << index << endl;
            index-=2;
            if (index == jump)
            {
                break;
            }
        } */

        /* cout <<"\n============================================\n\n";

        // Assignment 17
        
        for (int i = 1; i <= 102; ++i) 
        {
            if (i <= 9) 
            {
                cout << "00" << i << endl;
            } else if (i >= 10 && i <= 20) 
            {
                cout << "0" << i << endl;
            } else if (i >= 100 && i <= 102)
            {
                cout << i << endl;
            }
    } */

        /* cout <<"\n============================================\n\n";

        // Assignment 18

        for (int i = 0; i <= 1000; i+=100)
        {
            if (i == 0)
                continue;
            
            cout << i << "\n";

            if (i == 900)
                break;
        } */
        
        /* cout <<"\n============================================\n\n";

        // Assignment 19

        for (int i = 100; i <= 1100; i+=100)
        {
            cout << i << endl;
            if (i > 100 && i < 1100)
                {
                    cout << i << endl;
                } 
        } */
        
        cout <<"\n============================================\n\n";

        // Assignment 20
        string names[] = {"Osama", "Ahmed", "Mahmoud", "Hajar", "Eman", "Salwa"};

        int size = sizeof(names) / sizeof(string);
        

        for (int i = 0; i < size; i++)
        {   
            if (names[i].length() == 5)
                {
                    cout << names[i] << "\n";
                }
        }
        

    return 0;
}