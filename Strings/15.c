#include <stdio.h>
#include <string.h>

// Function to perform Run-Length Encoding (RLE) compression
void compressRLE(char *str) {
    int len = strlen(str);

    if (len == 0) {
        return; // Nothing to compress
    }

    char compressed[2 * len]; // Allocate a larger buffer for compressed string
    int count = 1;
    int j = 0; // Index for the compressed string

    for (int i = 1; i < len; i++) {
        if (str[i] == str[i - 1]) {
            count++;
        } else {
            compressed[j++] = str[i - 1];
            sprintf(compressed + j, "%d", count); // Append the count as a character
            j += strlen(compressed + j);
            count = 1;
        }
    }

    compressed[j++] = str[len - 1];
    sprintf(compressed + j, "%d", count);
    j += strlen(compressed + j);
    compressed[j] = '\0';

    strcpy(str, compressed);
}

int main() {
    char str[1000];
    printf("Enter a string to compress using RLE: ");
    gets(str);

    compressRLE(str);

    printf("Compressed string: %s\n", str);

    return 0;
}
