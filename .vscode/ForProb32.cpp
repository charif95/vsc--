#include <iostream>
#include <cmath>

using namespace std;

void FLProcedure(int& N, int& M)
{
    cout << "Please enter Number N?" << endl;
    cin >> N;
    cin >> M;
}

void FLFunction(int N, int M) 
{
    for (int l = 1; l <= M; l++) 
    {
       cout << N << "raised to the power of " << l << "is: " << pow(N, l) << endl;
    }
    
}

int main() {
    int N, M;
    FLProcedure(N, M);
    FLFunction(N, M);
    return 0;
} 

