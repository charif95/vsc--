#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int Num, M, Sum = 1, Count = 0;
    cout << "Please enter the Num and M ?\n";
    cin >> Num;
    cin >> M;

    while (Count < M)
    {
        Sum *=Num;
        Count++;
    }
        cout << Num << " raised to the power of " << M << " is: " << Sum << endl;
        
    
    
}

