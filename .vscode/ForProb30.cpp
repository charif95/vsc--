#include <iostream>
using namespace std;

void FLProcedure(int& N) 
{
    cout << "Please enter Number N?" << endl;
    cin >> N;
}

int FLFunction(int N) 
{
    int Sum = 1;
    for (int l = 1; l <= N; l++) 
    {
        Sum *= l;
        cout << Sum << endl;
    }
    return Sum;
    
}

int main() {
    int N;
    FLProcedure(N);
    int result = FLFunction(N);
    cout << "Sum to factorial of " << N << " is: " << result << endl;
    return 0;
} 