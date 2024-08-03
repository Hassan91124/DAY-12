#include <iostream>

using namespace std;

// Function to convert an integer to float
float integerToFloat(int value) {
    return static_cast<float>(value);
}

int main() {
    int integerValue = 42;
    float floatValue = integerToFloat(integerValue);
    cout << "Integer: " << integerValue << " -> Float: " << floatValue << endl;

    return 0;
}
