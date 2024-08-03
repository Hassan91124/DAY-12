#include <iostream>

using namespace std;

// Function to convert a binary string to decimal
int binaryToDecimal(const string& binary) {
    int decimal = 0;
    int base = 1; // 2^0

    for (int i = binary.length() - 1; i >= 0; --i) {
        char binaryDigit = binary[i];

        if (binaryDigit != '0' && binaryDigit != '1') {
            throw invalid_argument("Invalid binary character.");
        }

        if (binaryDigit == '1') {
            decimal += base;
        }

        base *= 2;
    }

    return decimal;
}

int main() {
    string binaryNumber = "1101";

    try {
        int decimalNumber = binaryToDecimal(binaryNumber);
        cout << "Binary: " << binaryNumber << " -> Decimal: " << decimalNumber << endl;
    } catch (const invalid_argument& e) {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}
