#include <iostream>

using namespace std;

void printLetters() {

    for (char l = 97; l <= 122; ++l) 
    {
    cout << l << " ";
    }
    cout << endl;
}

int main() {
    printLetters();
    return 0;
}