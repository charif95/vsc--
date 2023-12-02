#include <iostream>

using namespace std;

// int main()
// {

//     int i = 1, N = 6, Sum=1;
//         while (i <= N)
//         {
//             Sum *= i;
//             i++;
//         }
        
//     cout << "Factorial of " << N << " : " << Sum << endl; 

// } 

int main()
{
    int N, Sum = 1;

    cout << "Pleaes enter the Number N\n";
    cin >> N;
    
    while (N >= 1)
    {
        Sum *= N;
        N--;
    }
        cout << "Factorial is : " << Sum << endl; 

}

