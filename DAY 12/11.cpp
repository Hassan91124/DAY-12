#include <iostream>

using namespace std;

// Function to extract a substring from a given string
char* extractSubstring(const char* str, int start, int length) {
    char* substring = new char[length + 1];

    for (int i = 0; i < length; i++) {
        substring[i] = str[start + i];
    }

    substring[length] = '\0';

    return substring;
}

int main() {
    const char* text = "Hello, world!";
    int startIndex = 7;
    int length = 5;

    char* substring = extractSubstring(text, startIndex, length);
    cout << "Extracted substring: " << substring << endl;

    delete[] substring;
    return 0;
}
