#include <stdio.h>
#include <string.h>

// Function to remove all spaces from a string
void removeSpaces(char *str) {
    int len = strlen(str);
    int i, j;
    for (i = 0, j = 0; i < len; i++) {
        if (str[i] != ' ') {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';
}

int main() {
    char str[1000];
    printf("Enter a string with spaces: ");
    gets(str);

    removeSpaces(str);

    printf("String without spaces: %s\n", str);

    return 0;
}
