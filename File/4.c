#include <stdio.h>

int main() {
    FILE *inputFile, *outputFile;
    int num, sum = 0;

    inputFile = fopen("numbers.txt", "r");
    outputFile = fopen("sum.txt", "w");

    if (inputFile == NULL || outputFile == NULL) {
        printf("Files not found or could not be opened.\n");
        return 1;
    }

    while (fscanf(inputFile, "%d", &num) != EOF) {
        sum += num;
    }

    fprintf(outputFile, "Sum of numbers: %d\n", sum);

    fclose(inputFile);
    fclose(outputFile);

    printf("Sum of numbers has been written to sum.txt.\n");

    return 0;
}
