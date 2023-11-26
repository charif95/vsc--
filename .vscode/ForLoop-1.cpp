#include <iostream>
using namespace std;

void FLProcedure(int& N) 
{
    cout << "Please enter Number N?" << endl;
    cin >> N;
}

void FLFunction(int N) 
{
    for (int l = N; l >= 1; l--) 
    {
        cout << l << endl;
    }
}

int main() {
    int N;
    FLProcedure(N);
    FLFunction(N);
    return 0;
}