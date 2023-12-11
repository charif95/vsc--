#include <iostream>

using namespace std;

int main()
{
    
    // int a = 'a', b = 'b';

    // cout << int(a) << "\n"; // 97
    // cout << sizeof(a) << "\n"; // 4

    // cout << int(b) << "\n"; // 98
    // cout << sizeof(b) << "\n"; // 4

    // cout << char(97) << "\n"; // a

    // cout << char(98) << "\n"; // b

    char a = 'A';
  cout << sizeof(a) << "\n"; // 1 in memoir

  auto b = 'B';
  cout << sizeof(b) << "\n"; // 1 in memoir

  auto c = "C";
  cout << sizeof(c) << "\n"; // 8 in memoir

  char d = 'Z';
  cout << int(d) << "\n"; // 90

  cout << int('%') << "\n"; // 37
  cout << int('(') << "\n"; // 40
  cout << int(')') << "\n"; // 41

  // cout << int("Z") << "\n"; // Error

  cout << char(81) << "\n"; // Q


    return 0;
}