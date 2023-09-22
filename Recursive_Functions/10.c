#include <stdio.h>
#include <string.h>

// Function to swap characters at positions i and j in a string
void swap(char *x, char *y) {
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

// Recursive function to generate all permutations of a string
void generatePermutations(char str[], int startIndex, int endIndex) {
    if (startIndex == endIndex) {
        printf("%s\n", str);
    } else {
        for (int i = startIndex; i <= endIndex; i++) {
            swap(&str[startIndex], &str[i]);
            generatePermutations(str, startIndex + 1, endIndex);
            swap(&str[startIndex], &str[i]); // Backtrack
        }
    }
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    int length = strlen(str);

    if (length == 0) {
        printf("Please enter a non-empty string.\n");
    } else {
        printf("Permutations of %s:\n", str);
        generatePermutations(str, 0, length - 1);
    }

    return 0;
}
