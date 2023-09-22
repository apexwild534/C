#include <stdio.h>

// Function to process a number (example: square it)
double processNumber(double num) {
    return num * num;
}

int main() {
    FILE *inputFile, *outputFile;
    double num;

    // Open the input file for reading
    inputFile = fopen("input.txt", "r");
    if (inputFile == NULL) {
        printf("Error opening input file.\n");
        return 1;
    }

    // Open the output file for writing
    outputFile = fopen("output.txt", "w");
    if (outputFile == NULL) {
        printf("Error opening output file.\n");
        fclose(inputFile);
        return 1;
    }

    // Read numbers from the input file, process them, and write to the output file
    while (fscanf(inputFile, "%lf", &num) != EOF) {
        double result = processNumber(num);
        fprintf(outputFile, "%.2lf\n", result);
    }

    // Close the files
    fclose(inputFile);
    fclose(outputFile);

    printf("Processing complete. Results written to output.txt.\n");

    return 0;
}
