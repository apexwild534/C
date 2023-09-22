#include <stdio.h>
#include <string.h>

// Function to count occurrences of a substring in a larger string
int countSubstringOccurrences(const char *str, const char *substring) {
    int count = 0;
    int subLen = strlen(substring);
    while (*str) {
        if (strncmp(str, substring, subLen) == 0) {
            count++;
        }
        str++;
    }
    return count;
}

int main() {
    char largerStr[1000], substring[100];
    printf("Enter a larger string: ");
    gets(largerStr);
    printf("Enter the substring to count: ");
    gets(substring);

    int occurrences = countSubstringOccurrences(largerStr, substring);

    printf("Occurrences of '%s' in the larger string: %d\n", substring, occurrences);

    return 0;
}
