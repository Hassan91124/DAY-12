#include <iostream>

using namespace std;

// Function to convert a character representing a digit to its integer value
int charToInteger(char digit) {
    if (digit >= '0' && digit <= '9') {
        return digit - '0';
    } else {
        throw invalid_argument("Input character is not a digit.");
    }
}

int main() {
    char digit = '5';

    try {
        int integerValue = charToInteger(digit);
        cout << "Character: '" << digit << "' -> Integer: " << integerValue << endl;
    } catch (const invalid_argument& e) {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}
