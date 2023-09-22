#include <stdio.h>
#include <string.h>

// Function to reverse a string
void reverseString(char str[]) {
    int length = strlen(str);
    int start = 0;
    int end = length - 1;

    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

// Function to reverse a sentence (a string of words)
void reverseSentence(char sentence[]) {
    int length = strlen(sentence);
    int start = 0;

    for (int i = 0; i <= length; i++) {
        if (sentence[i] == ' ' || sentence[i] == '\0') {
            reverseString(sentence + start);
            start = i + 1;
        }
    }
}

int main() {
    char sentence[100];
    printf("Enter a sentence to reverse: ");
    scanf(" %[^\n]s", sentence);

    reverseSentence(sentence);

    printf("Reversed sentence: %s\n", sentence);

    return 0;
}
