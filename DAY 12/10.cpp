#include <iostream>

using namespace std;

// Function to reverse a string
void reverseString(char* str) {
    int length = 0;
    char* start = str;

    while (*str != '\0') {
        length++;
        str++;
    }

    char* end = start + length - 1;
    str = start;

    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() {
    char text[] = "Hello, world!";
    reverseString(text);
    cout << "Reversed string: " << text << endl;

    return 0;
}
