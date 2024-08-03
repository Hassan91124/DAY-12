#include <iostream>

using namespace std;

int main() {
    int intValue = 5;
    double doubleValue = 4.3;

    // Implicit conversion
    double implicitResult = intValue + doubleValue; // intValue is converted to double
    cout << "Implicit conversion result: " << implicitResult << endl;

    // Explicit conversion
    int explicitResult = static_cast<int>(doubleValue) + intValue;
    cout << "Explicit conversion result: " << explicitResult << endl;

   

    return 0;
}
