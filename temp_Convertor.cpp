#include <iostream>

using namespace std;

// Function to convert Fahrenheit to Celsius
double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}

// Function to convert Celsius to Fahrenheit
double celsiusToFahrenheit(double celsius) {
    return (celsius * 9 / 5) + 32;
}

int main() {
    char choice;
    double temperature;

    cout << "Temperature Conversion Program" << endl;
    cout << "-------------------------------" << endl;
    cout << "Enter 'F' to convert Fahrenheit to Celsius" << endl;
    cout << "Enter 'C' to convert Celsius to Fahrenheit" << endl;
    cout << "Your choice: ";
    cin >> choice;

    if (choice == 'F' || choice == 'f') {
        cout << "Enter temperature in Fahrenheit: ";
        cin >> temperature;
        cout << "Temperature in Celsius: " << fahrenheitToCelsius(temperature) << endl;
    } else if (choice == 'C' || choice == 'c') {
        cout << "Enter temperature in Celsius: ";
        cin >> temperature;
        cout << "Temperature in Fahrenheit: " << celsiusToFahrenheit(temperature) << endl;
    } else {
        cout << "Invalid choice. Please enter 'F' or 'C'." << endl;
    }

    return 0;
}
