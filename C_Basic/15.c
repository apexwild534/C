#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char filename[100];
    int num;
    
    // Prompt the user for the file name
    printf("Enter the name of the file: ");
    scanf("%s", filename);
    
    // Open the file for reading
    file = fopen(filename, "r");
    
    // Check if the file exists
    if (file == NULL) {
        printf("File not found or unable to open.\n");
        return 1;
    }
    
    // Read the numbers from the file into an array
    int numbers[1000];
    int count = 0;
    
    while (fscanf(file, "%d", &num) != EOF) {
        numbers[count++] = num;
    }
    
    // Close the file
    fclose(file);
    
    // Sort the numbers (here, we use the bubble sort algorithm)
    for (int i = 0; i < count - 1; i++) {
        for (int j = 0; j < count - i - 1; j++) {
                        if (numbers[j] > numbers[j + 1]) {
                // Swap numbers[j] and numbers[j + 1]
                int temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }
    
    // Open the same file for writing (which will overwrite the original content)
    file = fopen(filename, "w");
    
    // Check if the file was opened for writing
    if (file == NULL) {
        printf("Unable to open the file for writing.\n");
        return 1;
    }
    
    // Write the sorted numbers back to the file
    for (int i = 0; i < count; i++) {
        fprintf(file, "%d\n", numbers[i]);
    }
    
    // Close the file
    fclose(file);
    
    printf("Numbers sorted and written back to the file.\n");
    
    return 0;
}

