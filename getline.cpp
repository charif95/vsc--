#include <iostream>
#include <string>

using namespace std;

int main()
{
    int Number;
    string Name;
    string Country;

    cout << " Please enter Employee Number?\n";
    cin >> Number;

    cout << " Please enter the Name?\n";

    cin.ignore(1, '\n');
     
    getline(cin, Name);

    cout << " Please enter Country?\n";
    cin >> Country;


    cout << "Number: " << Number << ", Name: " << Name << ", Country: " << Country << endl;
    

}
