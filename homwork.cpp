#include <iostream>
#include <string>
#include <cmath>
 
using namespace std;

struct Student
{
    string FirstName;
    string lastName;
    string Phone;
    char Gender;
    float Math[3];
    float Physics[3];
    float Svt[3];
    const int MathPuis=7;
    const int PhysicsPuis=5;
    const int SvtPuis=3;

};

void StudentInfo(Student &Info)
{
    cout << "Please enter your FirstName?\n";
    cin >> Info.FirstName;

    cout << "Please enter your LastName?\n";
    cin >> Info.lastName;

    cout << "Please enter your Phone?\n";
    cin >> Info.Phone;

    cout << "Please enter your Gender?\n";
    cin >> Info.Gender;

    cout << "Please enter the notes Math?\n";
    cin >> Info.Math[0];
    cin >> Info.Math[1];
    cin >> Info.Math[2];

    cout << "Please enter the notes Physics?\n";
    cin >> Info.Physics[0];
    cin >> Info.Physics[1];
    cin >> Info.Physics[2];

    cout << "Please enter the notes Svt?\n";
    cin >> Info.Svt[0];
    cin >> Info.Svt[1];
    cin >> Info.Svt[2]; 

};

float CalculateMoyenneMath(Student &Info)
{
    return (Info.Math[0] + Info.Math[1] + Info.Math[2]) / 3;
}

float CalculateMoyennePhysics(Student &Info)
{
    return (Info.Physics[0] + Info.Physics[1] + Info.Physics[2]) / 3;
}

float CalculateMoyenneSvt(Student &Info)
{
    return (Info.Svt[0] + Info.Svt[1] + Info.Svt[2]) / 3;
}
float CalculateMoyenne(Student &Info)


int main()
{
    Student Student1;
    StudentInfo(Student1);
    cout << CalculateMoyenneMath(Student1) << endl; 
    cout << CalculateMoyennePhysics(Student1) << endl;
    cout << CalculateMoyenneSvt(Student1) << endl;

}
