#include <iostream>

using namespace std;

// Function to convert a float to an integer by truncating the decimal part
int floatToInteger(float value) {
    return static_cast<int>(value);
}

int main() {
    float floatValue1 = 42.78f;
    float floatValue2 = -5.99f;

    int intValue1 = floatToInteger(floatValue1);
    int intValue2 = floatToInteger(floatValue2);

    cout << "Float: " << floatValue1 << " -> Integer: " << intValue1 << endl;
    cout << "Float: " << floatValue2 << " -> Integer: " << intValue2 << endl;

    return 0;
}
