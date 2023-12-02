#include <iostream>

using namespace std;

int main()
{
    int i = 1, Sum=0;
        while (i <= 10)
        {
        if (i % 2 != 0)
        {
        Sum += i; 
        }
        i++;
         
    }

    cout << "the sum of odd numbers from 1 to 10 is: " << Sum << endl; 

} 

    