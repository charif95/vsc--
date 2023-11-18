#include <iostream>
#include <string>
using namespace std; 

int  x= 200;

void Myfunction()
{
    int x = 400;
    cout << "The value of x inside function is: " << x << endl;
}

int main()
{
    int x = 20;
    cout << "The local value of x inside Main is: " << x << endl;
    Myfunction();

    // ::x=200;
    //::x=6000;
    ::x=1000;
    cout << "The global value of x is: " << ::x << endl;

}