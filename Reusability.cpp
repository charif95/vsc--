#include <iostream>
#include <string>

using namespace std;

struct strInfo
{
    string FirstName;
    string lastName;
    int Age;
    string Phone;
    string Country;
    double MonthlySalary;
    double YearlySalary;
    char Gender;
    bool Married;
};

void ReadInfo(strInfo &Info)
{
    cout << "Please enter your FirstName?\n";
    cin >> Info.FirstName;

    cout << "Please enter your LastName?\n";
    cin >> Info.lastName;

    cout << "Please enter your Age\n";
    cin >> Info.Age;

    cout << "Please enter your Phone?\n";
    cin >> Info.Phone;

    cout << "Please enter your Country?\n";
    cin >> Info.Country;

    cout << "Please enter your MonthlySalary?\n";
    cin >> Info.MonthlySalary;
    
    Info.YearlySalary= Info.MonthlySalary*12;

    cout << "Please enter your Gender?\n";
    cin >> Info.Gender;

    cout << "Please enter your Married?\n";
    cin >> Info.Married;


};

void PrintInfo(strInfo Info)
{
    cout << "\n******************************************\n";

    cout << "FirstName: " << Info.FirstName << endl;
    cout << "lastName: " << Info.lastName << endl;
    cout << "Age: " << Info.Age << endl;
    cout << "Country: " << Info.Country << endl;
    cout << "MonthlySalary: " << Info.MonthlySalary << endl;
    cout << "YearlySalary: " << Info.YearlySalary << endl;
    cout << "Gender: " << Info.Gender << endl;
    cout << "Married: " << Info.Married << endl;

    cout << "\n******************************************\n";
}

int main()
{
    strInfo Person1Info;
    ReadInfo(Person1Info);
    PrintInfo(Person1Info);

    strInfo Person2Info;
    ReadInfo(Person2Info);
    PrintInfo(Person2Info);

}




