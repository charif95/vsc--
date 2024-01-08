#include <iostream>

using namespace std;

int main()
{
    // Assignment 01

    /* int age = 40;
    int points = 800;
    float rate = 8.5f;

    if (age > 18 && points > 500 && rate > 5)
    {
        cout << "Yes Age > 18 & Points > 500 & Rate > 5 \n"; 
    }*/

   // cout <<"============================================\n\n";

    // Assignment 02

    /* int age = 18;
    int points = 450;

    if (age > 18 && points > 500)
    {
        cout << "Yes Age Is Ok\n";
        cout << "Yes Points Is Ok\n";
    }
    else
    {
        cout << "No Age Is Not Ok\n";
        cout << "No Points Is Not Ok\n";
    } */

    /* int age = 20;
    int points = 450;

    if (age > 18) 
        {
            cout << "Yes Age Is Ok\n";
        }
    else
        {
            cout << "No Age Is Not Ok\n";
        }
    
    if (points > 500)
        {
            cout << "Yes Points Is Ok\n";
        } 
    else
        {
            cout << "No Points Is Not Ok\n";
        }  */ 
    
    /* int age = 20;
    int points = 650;

    if (age > 18 && points > 500)
    {
        cout << "Yes Age Is Ok\n";
        cout << "Yes Points Is Ok\n";
    }
    else
    {
        cout << "No Age Is Not Ok\n";
        cout << "No Points Is Not Ok\n";
    } */

    /* cout <<"============================================\n\n";

    // Assignment 03

    int num;

    cout << "Please Type A Number Between 0 And 150 \n";
    cin >> num; 

    if (num < 10)
        {
        cout << "00" << num << endl;
        }
    else if (10 < num && num < 100)
        {
        cout << "0" << num << endl;
        }

    else if (100 < num && num < 150)
        {
        cout << num << endl;
        } 

    else
    {
        cout << "Wrong Number\n";
    } */  
    
    /* cout <<"============================================\n\n";

    // Assignment 04

    int num1 = 9;
    int num2 = 6;
    int num3 = 9;
    int num4 = 33;

    // Do Not Edit Any Condition

    // Condition 1
    if (num1 > num2)
    cout << "Condition 1 Is True\n";
    else
    cout << "Condition 1 Is False\n";

    // Condition 2
    if (num1 > num2 && num1 < num4)
    cout << "Condition 2 Is True\n";
    else
    cout << "Condition 2 Is False\n";

    // Condition 3
    if (num1 > num2 && num1 == num3)
    cout << "Condition 3 Is True\n";
    else
    cout << "Condition 3 Is False\n";

    // Condition 4
    if (num1 + num2 < num4)
    cout << "Condition 4 Is True\n";
    else
    cout << "Condition 4 Is False\n";

    // Condition 5
    if (num1 + num3 < num4)
    cout << "Condition 5 Is True\n";
    else
    cout << "Condition 5 Is False\n";

    // Condition 6
    if (num1 + num2 + num3 < num4)
    cout << "Condition 6 Is True\n";
    else
    cout << "Condition 6 Is False\n";

    // Condition 7
    if (num4 - (num1 + num3) + num2 == 21)
    cout << "Condition 7 Is True\n";
    else
    cout << "Condition 7 Is False\n"; */

// Output Needed
/*"Condition 1 Is True"
"Condition 2 Is True"
"Condition 3 Is True"
"Condition 4 Is True"
"Condition 5 Is True"
"Condition 6 Is True"
"Condition 7 Is True" */

    /* cout <<"============================================\n\n";

    // Assignment 05

    int by = 82; // by => Birth Year
    int s = 500; // s => Salary
    
    if (by > 80)
    {
        if (s < 600)
        {
            cout << "Ok\n";
        }
        else
        {
            cout << "High\n";
        }
    }
    else
    {
        cout << "Not Ok\n";
    }
    
    // Ternary Operator
    // Syntax (Condition Is True) ? True : False;
    
    // cout << (by > 80 && s < 600 ? "Ok\n" : "High\n");

    cout << ((by > 80) ? (s < 600) ? "Ok" : "High" : "Not Ok\n");

    //string msg = (by > 80) ? ((s < 600) ? "Ok" : "High") : "Not Ok\n";
     
    //cout << msg << "\n"; */
    
    /* cout <<"\n============================================\n\n";

    // Assignment 06

    int age = 40;
    int points = 100;

    /* if (age > 18)
    {
        cout << "Age Is Ok\n";
        if (points > 50)
        {
            cout << "Points Is Ok\n";
            if (sizeof(age) == 4)
            {
                cout << "Age Data Is 4 Bytes\n";
            }
        }
    } */

    /*if (age > 18 && points > 50 && sizeof(age) == 4)
    {
        cout << "Age Data Is 4 Bytes\n";
        cout << "Age Is Ok\n";
        cout << "Points Is Ok\n";
    } */
    
    // Output Needed
   /*  "Age Data Is 4 Bytes"
    "Age Is Ok"
    "Points Is Ok" */

    cout <<"\n============================================\n\n";

    // Assignment 07

    int result = 0;
    int num1, num2, num3, num4;
    cout << "Please Type 4 Numbers In A Row\n";
    cout << "Only Even Numbers Smaller Than 20 Will Be Counted\n";
    cin >> num1 >> num2 >> num3 >> num4;

    if (num1 < 20 && num1 % 2 == 0)
    
        result += num1;

    if (num2 < 20 && num2 % 2 == 0)
    
        result += num2;
    
    if (num3 < 20 && num3 % 2 == 0)
    
        result += num3;
    
    if (num4 < 20 && num4 % 2 == 0)
    
        result += num4;
    
    cout << "Result = " << result << "\n";
    

    return 0;

}