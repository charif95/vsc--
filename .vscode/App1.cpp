#include <iostream>
using namespace std;

int main() {
    int kilobytes;

    // Asking the user to input the number of kilobytes
    cout << "Enter the number of kilobytes: ";
    cin >> kilobytes;

    // Calculating bytes and bits
    int bytes = kilobytes * 1024; // 1 kilobyte = 1024 bytes
    int bits = bytes * 8; // 1 byte = 8 bits

    // Displaying the results
    cout << "The number of kilobytes: " << kilobytes << endl;
    cout << "The number of bytes: " << bytes << endl;
    cout << "The number of bits: " << bits << endl;

    return 0;
}
