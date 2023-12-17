/*
    String 
        Concatenating Strings
        Normal Way
        strcat => Include string.h
        With +
        append
*/

#include <iostream>
#include <string.h>

using namespace std;
int main()
{
    char fname[] = "Charif ";
    char lname[] = "Elkhamlichi";

    cout << fname << lname << "\n";
    cout << strcat(fname, lname) << "\n";

    string firstname = "Charif ";
    string lastname = "Elkhamlichi";

    cout << firstname + lastname << "\n";
    cout << firstname.append(lastname) << "\n";


    return 0;
}