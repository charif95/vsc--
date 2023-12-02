#include <iostream>

using namespace std;


int main()
{
    for (int i = 10 ; i >= 1; i--)
    {

        for (int j = 10; j >= i; j--)
        {
            cout << j << " " ;
        }

        cout << "\n";
        
    }
    return 0;
}