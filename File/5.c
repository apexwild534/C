#include <stdio.h>

int main() {
    FILE *sourceFile, *destinationFile;
    char ch;

    sourceFile = fopen("source.txt", "r");
    destinationFile = fopen("destination.txt", "w");

    if (sourceFile == NULL || destinationFile == NULL) {
        printf("Files not found or could not be opened.\n");
        return 1;
    }

    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destinationFile);
    }

    fclose(sourceFile);
    fclose(destinationFile);

    printf("Contents copied from source.txt to destination.txt.\n");

    return 0;
}
