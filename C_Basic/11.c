#include <stdio.h>

int main() {
    FILE *file;
    char filename[100];
    char ch;
    int wordCount = 0, charCount = 0;
    int inWord = 0; // To track if currently in a word
    
    // Prompt the user for the file name
    printf("Enter the name of the text file: ");
    scanf("%s", filename);
    
    // Open the file for reading
    file = fopen(filename, "r");
    
    // Check if the file exists
    if (file == NULL) {
        printf("File not found or unable to open.\n");
        return 1;
    }
    
    // Read the file character by character
    while ((ch = fgetc(file)) != EOF) {
        charCount++;
        
        // Check if the character is part of a word
        if (ch == ' ' || ch == '\n' || ch == '\t') {
            inWord = 0;
        } else {
            // If not in a word, increment the word count
            if (!inWord) {
                wordCount++;
                inWord = 1;
            }
        }
    }
    
    // Close the file
    fclose(file);
    
    printf("Number of words: %d\n", wordCount);
    printf("Number of characters: %d\n", charCount);
    
    return 0;
}
