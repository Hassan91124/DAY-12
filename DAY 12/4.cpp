#include <iostream>

using namespace std;

// Function to add a double and an integer and return their sum as an integer
int addDoubleAndInteger(double d, int i) {
    return static_cast<int>(d) + i;
}

int main() {
    double doubleValue = 7.8;
    int intValue = 3;

    int sum = addDoubleAndInteger(doubleValue, intValue);
    cout << "Sum (as integer): " << sum << endl;

    return 0;
}
