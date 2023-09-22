#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// Function to check if two strings are anagrams
bool areAnagrams(const char *str1, const char *str2) {
    int count1[26] = {0}; // Array to count characters in str1
    int count2[26] = {0}; // Array to count characters in str2

    // Count characters in str1
    while (*str1) {
        count1[tolower(*str1) - 'a']++;
        str1++;
    }

    // Count characters in str2
    while (*str2) {
        count2[tolower(*str2) - 'a']++;
        str2++;
    }

    // Compare the character counts
    for (int i = 0; i < 26; i++) {
        if (count1[i] != count2[i]) {
            return false; // Not anagrams
        }
    }
    return true; // Anagrams
}

int main() {
    char str1[1000], str2[1000];
    printf("Enter the first string: ");
    gets(str1);
    printf("Enter the second string: ");
    gets(str2);

    if (areAnagrams(str1, str2)) {
        printf("The strings are anagrams.\n");
    } else {
        printf("The strings are not anagrams.\n");
    }

    return 0;
}
