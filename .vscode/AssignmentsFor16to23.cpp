// Assignment 01

    /* // Example

    false // bool => Boolean

    char 'a'
    char '9'
    int 9
    bool true
    int 100
    int -10
    bool 0
    bool false
    double 10.9 */

#include <iostream>
#include <climits>
using namespace std;

int main()
{
    // Assignment 02

    /* double salary = 5000.98;
    cout << sizeof(5000.98) << endl; // 8 Bytes
    cout << sizeof(5000.98) * 8 << endl; // 64 Bits

    cout <<"============================================\n\n"; */

    // Assignment 03

   
   
    /* cout << "Maximum Integer Number Is => " << INT_MAX << endl;
    cout << "Minimum Integer Number Is => " << INT_MIN << endl;
    cout << "Maximum Short Integer Number Is => " << SHRT_MAX << endl;
    cout << "Minimum Short Integer Number Is => " << SHRT_MIN << endl;

    cout <<"============================================\n\n";
 */
    /* // Assignment 04

    // Edit Line To Make 8 Become 4
   
    cout << sizeof(float(10.5 + 5 + 20.5 + 10)) << "\n"; // 4

    cout <<"============================================\n\n";
 */
    /* // Assignment 05

    char a = '~';
    char b = '&';
    char c = '%';
    char d = 'A';

    cout << "ASCII Value of ~ Is: " << int(a) << endl;
    cout << "ASCII Value of & Is: " << int(b) << endl;
    cout << "ASCII Value of % Is: " << int(c) << endl;
    cout << "ASCII Value of A Is: " << int(d) << endl;

   /*  // Output Needed
    "ASCII Value of ~ Is 126"
    "ASCII Value of & Is 38"
    "ASCII Value of % Is 37"
    "ASCII Value of A Is 65" */

    /* cout <<"============================================\n\n";

    // Assignment 06

    int a = 69;
    int b = 108;
    int c = 122;
    int d = 101;
    int e = 114;
    int f = 111;

    int g = 67;
    int h = 72;
    int i = 65;
    int j = 82;
    int k = 73;
    int l = 70;


    cout << "Character Of This ASCII Value 69 Is: " << char(a) << endl;
    cout << "Character Of This ASCII Value 108 Is: " << char(b) << endl;
    cout << "Character Of This ASCII Value 122 Is: " << char(c) << endl;
    cout << "Character Of This ASCII Value 101 Is: " << char(d) << endl;
    cout << "Character Of This ASCII Value 114 Is: " << char(e) << endl;
    cout << "Character Of This ASCII Value 111 Is: " << char(f) << endl;

    cout <<"============================================\n\n";

    cout << char(a);
    cout << char(b);
    cout << char(c);
    cout << char(d);
    cout << char(e);
    cout << char(f) << "\n\n";

    cout << char(g);
    cout << char(h);
    cout << char(i);
    cout << char(j);
    cout << char(k);
    cout << char(l) << "\n\n"; */

    /* cout <<"============================================\n\n";

    // Assignment 07

    int a = 1;
    int b = 13;
    int c = 17;
    int d = 70;

    

    cout << char(d - a);
    cout << char(d + c);
    cout << char(d + b);

    // Output Needed
    // "EWS"  */

    /* cout <<"============================================\n\n";

    // Assignment 08

    // Edit Anything Except Values
    int short a = 100;
    int long long b = 15001500;
    double long c = 100.54565746;

    // Do Not Edit
    cout << sizeof(a) << " Bytes\n"; // 2 Bytes
    cout << sizeof(b) << " Bytes\n"; // 8 Bytes
    cout << sizeof(c) << " Bytes\n"; // 16 Bytes
 */

    /* cout <<"============================================\n\n";

    // Assignment 09

    // Edit Anything Except Values
    unsigned int a = 100;
    int b = -100;
    short c = 100;
    double long d = 500.55;

    // Do Not Edit
    cout << a << "\n"; // 100
    cout << b << "\n"; // -100
    cout << c << "\n"; // 100
    cout << d << "\n"; // 500.55 */

    /* cout <<"============================================\n\n";

    // Assignment 10

    // Add Type Alias Here

    // unsigned int num = 150050005; 1
    // int num = 150050005; 2

    // Do Not Edit
    int long long num = 150050005; // This Is Long Long Int
    cout << num << "\n"; // 150050005 */

    cout <<"============================================\n\n";

    /* // Assignment 11
    
    // Do Not Edit Here

    short int a = 100;
    float b = 98.5f;
    double c = 1.7;

    // Edit This Line And Use Type Casting To Get The Output

    cout << static_cast<int>(a + b + c) << endl; */

    cout <<"============================================\n\n";

    // Assignment 12

    // Do Not Edit Here
    short a = 1000;
    int b = 10000;
    long double c = 5.560000505012;

    // Change ??? To Something Else To Get The Output
    cout << sizeof(short) << endl;
    cout << sizeof(int) << endl;
    cout << sizeof(long double) << endl;

    cout << sizeof(long double) - sizeof(int) << "\n"; // 12
    cout << sizeof(long double) + sizeof(int) << "\n"; // 20
    cout << sizeof(long double) * sizeof(short) << "\n"; // 32
    cout << (a * int(c)) << "\n"; // 5000
    cout << char(sizeof(long double) + sizeof(int) * b) << "\n"; // p 
    
    return 0;
}