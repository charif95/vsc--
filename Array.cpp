#include <iostream>

using namespace std;

int main()
{
    float Grades[3];
    int x[3] = {80, 70, 90 };
    // int RT =  (x[0]+ x[1] + x[2]) / 3;
    // cout << RT << endl;
    
    cout << "Please enter Grade1? \n";
    cin >> Grades[0];

    cout << "Please enter Grade1? \n";
    cin >> Grades[1];

    cout << "Please enter Grade1? \n";
    cin >> Grades[2];

    float Result = (Grades[0] + Grades[1] + Grades[2]) / 3;

    cout << "The average of grades is: " << Result << endl;


}