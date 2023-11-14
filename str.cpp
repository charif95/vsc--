#include <iostream>
#include <string>

using namespace std;

int main()
{
    string String1, String2, String3;

    cout << " Please enter String1 ?" << endl;
    getline(cin, String1);\

    cout << " Please enter String2 ?" << endl;
    cin >> String2;

    cout << " Please enter String3 ?" << endl;
    cin >> String3;


    int Sum = stoi(String2) * stoi(String3);

    cout << "************************************\n\n";
    cout << "the length of the String1 is: " << String1.length() << endl;

    cout << "Characters at 0, 2, 4, 7, are: " << String1[0] << "," << String1[2] << "," << String1[4] << "," << String1[7] << endl;

    cout << "Concatenating String2 and String3 = " << String2 + String3 << endl;

    cout << "5 * 10 = " << Sum << endl;
    


}
