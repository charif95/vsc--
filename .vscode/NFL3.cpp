#include <iostream>

using namespace std;


int main()
{
    for (char l = 65 ; l <= 71; l++)
    {

        for (char L = 65; L <= l; L++)
        {
            cout << L << " " ;
        }

        cout << "\n";
        
    }
    return 0;
}