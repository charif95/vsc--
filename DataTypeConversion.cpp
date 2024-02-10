#include <iostream>
#include <string>

using namespace std;

int main()
{

    string st1 = "43.22";

    int N1 = 20;

    double N2 = 33.5;

    float N3 = 55.23;

    // convert string to integer
    int num_int = stoi(st1);
    

    // convert string to float
    float num_float = stof(st1);

    // convert string to double
    double num_double = stod(st1);




    // convert integer to string
    string str1, str2, str3;
    str1 = to_string(N1);

    // convert double to string
    str2 = to_string(N2);

    // convert float to string
    str3 = to_string(N3);

    // convert float to integer
    int Num1; 

    Num1 = N3; //implicit conversion from float to int
    Num1 = (int) N3; //ixplicit conversion
    Num1 = int(N3); //ixplicit conversion



    cout << "num_int = " << num_int << endl;
    cout << "num_float = " << num_float << endl;
    cout << "num_double = " << num_double << endl << endl; 


    cout << "to_string : " << str1 << endl; 
    cout << "to_string : " << str2 << endl; 
    cout << "to_string : " << str3 << endl << endl; 


    cout << Num1 << endl;


}
