#include <iostream>
#include <iomanip>

using namespace std;

// Function to convert a double to a float
float doubleToFloat(double value) {
    return static_cast<float>(value);
}

int main() {
    double doubleValue = 12345678.12345678;
    float floatValue = doubleToFloat(doubleValue);

    cout << setprecision(16);
    cout << "Double: " << doubleValue << endl;
    cout << "Float: " << floatValue << endl;

   
    return 0;
}
