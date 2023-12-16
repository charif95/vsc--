/*
    Arrays
        Array Class
        Test Methods

    Syntax
    Template<Type, Size> Identifier;
*/

#include <array>
#include <iostream>

using namespace std;

int main()
{
    // int points[4] = {1, 2, 3, 4}; // C - Style Array
    array<int, 4> points = {1, 2, 3, 4};
    cout << points[0] << endl;
    cout << points[1] << endl;
    cout << points[2] << endl;
    cout << points[3] << endl;
    cout << "Elements Count: " << points.size() << "\n";

    points.fill(10);
    cout << points[0] << endl;
    cout << points[1] << endl;
    cout << points[2] << endl;
    cout << points[3] << endl;

    points.fill('A');
    cout << points[0] << endl;
    cout << points[1] << endl;
    cout << points[2] << endl;
    cout << points[3] << endl;

    points.fill(true);
    cout << points[0] << endl;
    cout << points[1] << endl;
    cout << points[2] << endl;
    cout << points[3] << endl;


    return 0;
}