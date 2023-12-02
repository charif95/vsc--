#include <iostream>

using namespace std;

// int ReadIntNumInRange(int From , int To)
// {
//     int N;
//     cout << "Please enter a number N\n";
//     cin >> N;

//     while (N < From || N > To)
//     {
//         cout << "Wrong Number,";
//         cout << "Please enter a number between " << From << " And " << To << endl;
//         cin >> N;
//     }
    
//     return N;
// }

// int main()
// {
//     cout << " The Number is " << ReadIntNumInRange(1, 10) << endl;

// }

int main()
{
    int i = 1;
    while (i <= 10)
    {
        cout << i << endl;
        i++;
    }
    return 0;

}