#include <iostream>
#include <string>

using namespace std;

void MySumProcedure()
{
    int Number1, Number2;

    cout << "Please enter Number 1?" << endl;
    cin >> Number1;

    cout << "Please enter Number 2?" << endl;
    cin >> Number2;

    cout << Number1 + Number2<< endl;
}

int MySumFunction()
{
    int Number1, Number2;

    cout << "Please enter Number 1?" << endl;
    cin >> Number1;

    cout << "Please enter Number 2?" << endl;
    cin >> Number2;

    return Number1 + Number2;
}
int main()
{
    MySumProcedure();
    cout << MySumFunction() << endl;
    
 return 0;
}
