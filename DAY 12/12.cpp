#include <iostream>

using namespace std;

// Function to convert a numeric string to an integer
int stringToInteger(const char* str) {
    int number = 0;
    while (*str != '\0') {
        if (*str < '0' || *str > '9') {
            throw invalid_argument("Invalid character in numeric string.");
        }
        number = number * 10 + (*str - '0');
        str++;
    }
    return number;
}

int main() {
    const char* numericString = "12345";

    try {
        int number = stringToInteger(numericString);
        cout << "String \"" << numericString << "\" to Integer: " << number << endl;
    } catch (const invalid_argument& e) {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}
