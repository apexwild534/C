#include <stdio.h>
#include <string.h>

// Function to reverse a string in place
void reverseString(char *str) {
    int length = strlen(str);
    for (int i = 0, j = length - 1; i < j; i++, j--) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

int main() {
    char str[100];
    printf("Enter a string: ");
    gets(str);

    reverseString(str);

    printf("Reversed string: %s\n", str);

    return 0;
}
