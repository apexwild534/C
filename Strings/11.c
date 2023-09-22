#include <stdio.h>
#include <string.h>

// Function to compute the longest prefix-suffix array (LPS) for KMP
void computeLPSArray(const char *pattern, int *lps) {
    int len = 0; // Length of the previous longest prefix suffix

    int i = 1;
    lps[0] = 0; // LPS for the first character is always 0

    while (pattern[i]) {
        if (pattern[i] == pattern[len]) {
            len++;
            lps[i] = len;
            i++;
        } else {
            if (len != 0) {
                len = lps[len - 1];
            } else {
                lps[i] = 0;
                i++;
            }
        }
    }
}

// Function to perform string search using the KMP algorithm
void KMPSearch(const char *text, const char *pattern) {
    int textLen = strlen(text);
    int patternLen = strlen(pattern);

    int lps[patternLen]; // Longest prefix-suffix array for the pattern
    computeLPSArray(pattern, lps);

    int i = 0; // Index for text[]
    int j = 0; // Index for pattern[]

    while (i < textLen) {
        if (pattern[j] == text[i]) {
            i++;
            j++;
        }

        if (j == patternLen) {
            printf("Pattern found at index %d\n", i - j);
            j = lps[j - 1];
        } else if (i < textLen && pattern[j] != text[i]) {
            if (j != 0) {
                j = lps[j - 1];
            } else {
                i++;
            }
        }
    }
}

int main() {
    char text[1000], pattern[100];
    printf("Enter the text: ");
    gets(text);
    printf("Enter the pattern to search for: ");
    gets(pattern);

    KMPSearch(text, pattern);

    return 0;
}
