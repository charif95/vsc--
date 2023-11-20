#include <iostream>
#include <string>

using namespace std;

// void Swap(int A, int B) By Value;

// By Reference (& + Variable = &A &B );
void Swap(int &A, int &B) 
{
    int Temp;
    Temp = A;
    A = B;
    B = Temp;

    cout << "After inside function A= " << A << ", B=" << B << endl;

}

int main()
{
    int A, B;

    cout << "Please enter the A?\n";
    cin >> A;

    cout << "Please enter the B?\n";
    cin >> B;

    cout << "Before Swap A= " << A << ", B= " << B << endl;

    Swap(A, B);

    cout << "After Swap inside Main the function A= " << A << ", B= " << B << endl;

}
