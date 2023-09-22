#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *inputFile, *outputFile;
    char line[1000];
    char word[100];
    int wordCount;

    inputFile = fopen("input.txt", "r");
    outputFile = fopen("word_count.txt", "w");

    if (inputFile == NULL || outputFile == NULL) {
        printf("Files not found or could not be opened.\n");
        return 1;
    }

    while (fgets(line, sizeof(line), inputFile)) {
        wordCount = 0;
        char *token = strtok(line, " ");
        while (token != NULL) {
            wordCount++;
            token = strtok(NULL, " ");
        }
        fprintf(outputFile, "Line: %sWord Count: %d\n", line, wordCount);
    }

    fclose(inputFile);
    fclose(outputFile);

    printf("Word counts have been written to word_count.txt.\n");

    return 0;
}
