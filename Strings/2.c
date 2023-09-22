#include <stdio.h>

// Function to copy one string into another using a loop
void stringCopy(char *dest, const char *src) {
    while (*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0'; // Null-terminate the destination string
}

int main() {
    char source[100], destination[100];
    printf("Enter a source string: ");
    gets(source);

    stringCopy(destination, source);

    printf("Copied string: %s\n", destination);

    return 0;
}
