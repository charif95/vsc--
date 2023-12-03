#include <iostream>
using namespace std;

int main() {
    int N, M;
    cout << "Enter base (N): ";
    cin >> N;

    cout << "Enter exponent (M): ";
    cin >> M;

    int result = 1;
    int exponent = M;
    int base = N;

    while (exponent > 0) 
    {
        if (exponent % 2 == 1) 
        {
            result *= base;
        }
        base *= base;
        exponent /= 2;
    }

    cout << N << " raised to the power of " << M << " is: " << result << endl;

    return 0;
}
