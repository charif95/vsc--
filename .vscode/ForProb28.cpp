#include <iostream>
using namespace std;

void FLProcedure(int& N) 
{
    cout << "Please enter Number N?" << endl;
    cin >> N;
}

int FLFunction(int N) 
{
    int Sum = 0;
    for (int l = 1; l <= N; l += 2) 
    {
        Sum += l;
    }
    return Sum;
    
}

int main() {
    int N;
    FLProcedure(N);
    int result = FLFunction(N);
    cout << "Sum of Odd numbers from 1 to " << N << " is: " << result << endl;
    return 0;
} 



// void FLProcedure(int& N) {
//     cout << "Please enter Number N?" << endl;
//     cin >> N;
// }

// int FLFunction(int N) {
//     int sum = 0;
//     for (int l = 1; l <= N; l += 2) {
//         sum += l;
//     }
//     return sum;
// }

// int main() {
//     int N;
//     FLProcedure(N);
//     int result = FLFunction(N);
//     cout << "Sum of odd numbers from 1 to " << N << " is: " << result << endl;
//     return 0;
// }
