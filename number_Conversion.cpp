#include <iostream>
#include <bitset>   // For binary conversion
#include <iomanip>  // For setw and setfill
#include <sstream>  // For stringstream
#include <string>   // For string manipulation

using namespace std;

// Function to convert decimal to binary
string decimalToBinary(int decimal) {
    stringstream ss;
    ss << bitset<8 * sizeof(int)>(decimal);
    string binaryStr = ss.str();
    return binaryStr;
}

// Function to convert decimal to octal
string decimalToOctal(int decimal) {
    stringstream ss;
    ss << oct << decimal;
    string octalStr = ss.str();
    return octalStr;
}

// Function to convert decimal to hexadecimal
string decimalToHexadecimal(int decimal) {
    stringstream ss;
    ss << hex << decimal;
    string hexStr = ss.str();
    return hexStr;
}

int main() {
    int decimalNumber;

    cout << "Enter a decimal number: ";
    cin >> decimalNumber;

    cout << "Decimal: " << decimalNumber << endl;
    cout << "Binary : " << decimalToBinary(decimalNumber) << endl;
    cout << "Octal  : " << decimalToOctal(decimalNumber) << endl;
    cout << "Hex    : " << decimalToHexadecimal(decimalNumber) << endl;

    return 0;
}
