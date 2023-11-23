#include <iostream>

using namespace std;

int main()
{
    double TotalSales, TotalCommission;
    

    cout << "Please enter your TotalSales?\n";
    cin >> TotalSales;
   

    

    if (TotalSales >= 1000000)
    {
        cout << "Percentage = " << TotalSales * 0.01 << endl;
    }

    else if (TotalSales >= 500000)
    {
        cout << "Percentage = " << TotalSales * 0.02 << endl;
    }

    else if (TotalSales >= 100000)
    {
        cout << "Percentage = " << TotalSales * 0.03 << endl;
    }

    else if (TotalSales >= 50000)
    {
        cout << "Percentage = " << TotalSales * 0.05 << endl;
    }

    else
    {
        cout << "Percentage is 0.00.\n";
    }
 
}