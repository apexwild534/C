#include <stdio.h>
#include <string.h>

// Recursive function to reverse a string
void reverseString(char str[], int start, int end) {
    if (start >= end) {
        return;
    }

    // Swap characters at start and end positions
    char temp = str[start];
    str[start] = str[end];
    str[end] = temp;

    // Recursively reverse the substring
    reverseString(str, start + 1, end - 1);
}

int main() {
    char str[100];
    printf("Enter a string: ");
    gets(str); // Warning: gets() is not safe, use fgets() for safer input

    reverseString(str, 0, strlen(str) - 1);

    printf("Reversed string: %s\n", str);

    return 0;
}
