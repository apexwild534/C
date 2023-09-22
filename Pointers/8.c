#include <stdio.h>
#include <string.h>

// Function to concatenate two strings using pointers
void concatenateStrings(char *dest, const char *src) {
    while (*dest) {
        dest++;
    }
    while (*src) {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
}

int main() {
    char str1[100], str2[100];

    printf("Enter the first string: ");
    scanf("%s", str1);

    printf("Enter the second string: ");
    scanf("%s", str2);

    // Call the concatenateStrings function with pointers to the strings
    concatenateStrings(str1, str2);

    printf("Concatenated string: %s\n", str1);

    return 0;
}
