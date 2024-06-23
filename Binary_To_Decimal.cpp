#include <iostream>
#include <string>
#include <cmath>

int binaryToDecimal(const std::string& binaryStr) {
    int decimalValue = 0;
    int length = binaryStr.length();

    for (int i = 0; i < length; ++i) {
        if (binaryStr[length - i - 1] == '1') {
            decimalValue += std::pow(2, i);
        }
    }

    return decimalValue;
}

int main() {
    std::string binaryStr;

    std::cout << "Enter a binary number: ";
    std::cin >> binaryStr;

    int decimalValue = binaryToDecimal(binaryStr);
    std::cout << "The decimal value is: " << decimalValue << std::endl;

    return 0;
}
