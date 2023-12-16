/*
    Arrays 
        Two Dimensional Arrays AKA [ 2D Array]
    Search For
        Matrix Operations
        3D Array
*/
#include <iostream>

using namespace std;

int main()
{
    int points_a[3] = {1, 2, 3};
    int points_b[3] = {4, 5, 6};
    int points_c[3] = {7, 8, 9};

    // Good Practice
    const int rows = 3;
    const int columns = 3;

    int points[rows][columns] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    cout << points[1][2] << endl; // 6
    cout << points[2][0] << endl; // 7
    cout << points[2][2] << endl; // 9

    // int points[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    // cout << points[1][2] << endl; // 6
    // cout << points[2][0] << endl; // 7
    // cout << points[2][2] << endl; // 9

    // Bad Practice 
    // int points[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    // cout << points[1][2] << endl; // 6
    // cout << points[2][0] << endl; // 7
    // cout << points[2][2] << endl; // 9
}