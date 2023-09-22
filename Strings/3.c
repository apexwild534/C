#include <stdio.h>
#include <stdbool.h>
#include <string.h>

// Function to check if a given string is a palindrome
bool isPalindrome(const char *str) {
    int length = strlen(str);
    for (int i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            return false; // Not a palindrome
        }
    }
    return true; // Palindrome
}

int main() {
    char str[100];
    printf("Enter a string: ");
    gets(str);

    if (isPalindrome(str)) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}
