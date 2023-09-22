#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    int *arr, size = 0;
    int num, sum = 0;

    file = fopen("input.txt", "r");

    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    // Count the number of integers in the file
    while (fscanf(file, "%d", &num) != EOF) {
        size++;
    }

    // Close and reopen the file to reset the file pointer
    fclose(file);
    file = fopen("input.txt", "r");

    // Dynamically allocate memory for the integer array
    arr = (int *)malloc(size * sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        fclose(file);
        return 1;
    }

    // Read integers from the file and store in the dynamically allocated array
    for (int i = 0; i < size; i++) {
        fscanf(file, "%d", &arr[i]);
        sum += arr[i];
    }

    printf("Sum of integers from the file: %d\n", sum);

    // Free the dynamically allocated memory
    free(arr);

    // Close the file
    fclose(file);

    return 0;
}
