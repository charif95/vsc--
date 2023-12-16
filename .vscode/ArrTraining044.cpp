/*
    Arrays
        Guess The Number From Sequences Game
*/

#include <array>
#include <iostream>

using namespace std;

int main()
{
    int points = 0;
    int answers[5];

    cout << "Type The Missing Number In Sequences: \n";

    cout << "Sequences 1\n";
    cout << "1 | 5 | 10 | 16 | ??\n";
    cin >> answers[0];

    cout << "Sequences 2\n";
    cout << "2 | 4 | 8 | 16 | ??\n";
    cin >> answers[1];

    cout << "Sequences 3\n";
    cout << "1 | 1 | 2 | 3 | ??\n";
    cin >> answers[2];

    cout << "Sequences 3\n";
    cout << "2 | 2 | 4 | 6 | ??\n";
    cin >> answers[3];

    cout << "Sequences 3\n";
    cout << "3 | 3 | 9 | 27 | ??\n";
    cin >> answers[4];


    int sequences[5][5] = {
        {1, 5, 10, 16, 23},
        {2, 4, 8, 16, 32},
        {1, 1, 2, 3, 5},
        {2, 2, 4, 6, 10},
        {3, 3, 9, 27, 243}};

    if (answers[0] == sequences[0][4])
    {
        points++;
    }
     if (answers[1] == sequences[1][4])
    {
        points++;
    }
     if (answers[2] == sequences[2][4])
    {
        points++;
    }
    if (answers[3] == sequences[3][4])
    {
        points++;
    }
    if (answers[4] == sequences[4][4])
    {
        points++;
    }

    cout << "Your Points Is " << points << " from 5";

    

    return 0;
}