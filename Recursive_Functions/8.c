#include <stdio.h>
#include <stdbool.h>
#include <string.h>

// Recursive function to check if a string is a palindrome
bool isPalindrome(char str[], int start, int end) {
    if (start >= end) {
        return true;
    }
    if (str[start] != str[end]) {
        return false;
    }
    return isPalindrome(str, start + 1, end - 1);
}

int main() {
    char str[100];
    printf("Enter a string: ");
    gets(str); // Warning: gets() is not safe, use fgets() for safer input

    if (isPalindrome(str, 0, strlen(str) - 1)) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}
