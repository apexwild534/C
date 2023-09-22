#include <stdio.h>
#include <string.h>

// Function to tokenize a sentence into words and store them in an array
void tokenizeSentence(const char *sentence, char *words[], int *wordCount) {
    *wordCount = 0;
    char *token = strtok((char *)sentence, " "); // Split by space

    while (token != NULL) {
        words[(*wordCount)++] = token;
        token = strtok(NULL, " ");
    }
}

int main() {
    char sentence[1000];
    char *words[100];
    int wordCount;

    printf("Enter a sentence: ");
    gets(sentence);

    tokenizeSentence(sentence, words, &wordCount);

    printf("Words in the sentence:\n");
    for (int i = 0; i < wordCount; i++) {
        printf("%s\n", words[i]);
    }

    return 0;
}
