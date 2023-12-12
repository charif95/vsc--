/*
  Operators & Operands
  "Symbols To Operate On Data"

  - Increment And Decrement Operators
  "For incrementing And Decrementing Values"

  --- Pre/Post Increment
  --- Pre/Post Decrement
*/

#include <iostream>
using namespace std;

int main()
{
    // Pre/Post Decrement
  int likes = 0;
  cout << likes-- << "\n"; // 0
  cout << likes << "\n";   // -1

  int views = 0;
  cout << --views << "\n"; // -1
  cout << views << "\n";   // -1
  
    // Pre/Post Increment
  int L = 0;
  cout << L++ << "\n"; // 0
  cout << L << "\n";   // 1

  int V = 0;
  cout << ++V << "\n"; // 1
  cout << V << "\n";   // 1

  return 0;

}