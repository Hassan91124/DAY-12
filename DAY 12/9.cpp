#include <iostream>

using namespace std;

// Function to calculate the length of a string
int stringLength(const char* str) {
    int length = 0;
    while (*str != '\0') {
        length++;
        str++;
    }
    return length;
}

int main() {
    const char* text = "Hello, world!";
    int length = stringLength(text);
    cout << "Length of string \"" << text << "\" is: " << length << endl;

    return 0;
}
