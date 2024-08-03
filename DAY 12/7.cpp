#include <iostream>

using namespace std;


int hexToDecimal(const string& hex) {
    int decimal = 0;
    int base = 1; // 16^0

    for (int i = hex.length() - 1; i >= 0; --i) {
        char hexDigit = hex[i];

        int value;
        if (hexDigit >= '0' && hexDigit <= '9') {
            value = hexDigit - '0';
        } else if (hexDigit >= 'A' && hexDigit <= 'F') {
            value = hexDigit - 'A' + 10;
        } else if (hexDigit >= 'a' && hexDigit <= 'f') {
            value = hexDigit - 'a' + 10;
        } else {
            throw invalid_argument("Invalid hexadecimal character.");
        }

        decimal += value * base;
        base *= 16;
    }

    return decimal;
}

int main() {
    string hexNumber = "1A3F";

    try {
        int decimalNumber = hexToDecimal(hexNumber);
        cout << "Hexadecimal: " << hexNumber << " -> Decimal: " << decimalNumber << endl;
    } catch (const invalid_argument& e) {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}
