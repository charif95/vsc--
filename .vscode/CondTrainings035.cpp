#include <iostream>

using namespace std;

int main()
{
    // App 1 => Even / Odd Checker
    
    int num;
        cout << "Please enter the num\n";
        cin >> num;

    if (num % 2 == 0)
        cout << "The Number " << num << " Is Even\n";
    else
        cout << "The Number " << num << " Is Odd\n";

    // App 2 => Find Greatest Number

    int a, b, c;
        cout << "Please enter the three Numbers\n";
        cin >> a;
        cin >> b;
        cin >> c;

        if (a > b && a > c)
        {
            cout << a << " Is The Greatest Number" << endl;
        }
        else if (b > a && b > c)
            {
                cout << b << " Is The Greatest Number" << endl;
            }
            else
            {
                    cout << c << " Is The Greatest Number" << endl;
                
                
            }


        // App 3 => User Rank Checker

    int points;

    cout << "Enter Your points\n";
    cin >> points;

    if (points > 0 && points <= 500)
    {
        cout << " Not Bad\n";
    }
    else if (points > 500 && points <= 1000)
    {
        cout << " Very Good\n";
    }
    else if (points == 0)
    {
        cout << "Erorr\n";
    }
    else
    {
        cout <<"VIP\n";
    }
    
    // App 4 => Simple Calculator

    int num_one, num_two, op_calcul;

        cout << "Enter num_one\n";
        cin >> num_one;

        cout << "Enter num_two\n";
        cin >> num_two;

        cout << "Enter op_calcul\n";
        cout << "[1] +\n";
        cout << "[2] -\n";
        cout << "[3] *\n";
        cout << "[4] /\n";
        cin >> op_calcul;

        if (op_calcul == 1)
        {
            cout << num_one + num_two << endl;
        }
        else if (op_calcul == 2)
        {
            cout << num_one - num_two << endl;
        }
        else if (op_calcul == 3)
        {
            cout << num_one * num_two << endl;
        }
        else if (op_calcul == 4)
        {
            cout << num_one / num_two << endl;
        }
        else
        {
            cout << "Operation Is Not Valid\n";
        }

        return 0;
        

}
        

    
    
