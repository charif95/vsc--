/*
    Function
        Forward Declararation
 */

#include <iostream>
using namespace std;

int calc(int a, int b);

int main()
{
    cout << calc(10, 20);
    return 0;
}

int calc(int a, int b)
{
    return a + b;
}