#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function to convert a string to lowercase
void stringToLower(char *str) {
    while (*str) {
        *str = tolower(*str);
        str++;
    }
}

int main() {
    char str[1000];
    printf("Enter a string: ");
    gets(str);

    stringToLower(str);

    printf("Lowercase equivalent: %s\n", str);

    return 0;
}
