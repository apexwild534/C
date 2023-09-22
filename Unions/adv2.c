#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define a union to interpret data from the binary file
union Data {
    int intValue;
    float floatValue;
    char stringValue[50];
};

int main() {
    FILE *file = fopen("data.bin", "rb");
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    union Data data;
    size_t dataSize;

    // Read and display data until the end of the file is reached
    while (fread(&dataSize, sizeof(size_t), 1, file) == 1) {
        if (dataSize == sizeof(int)) {
            fread(&data.intValue, sizeof(int), 1, file);
            printf("Integer Value: %d\n", data.intValue);
        } else if (dataSize == sizeof(float)) {
            fread(&data.floatValue, sizeof(float), 1, file);
            printf("Float Value: %.2f\n", data.floatValue);
        } else {
            fread(data.stringValue, dataSize, 1, file);
            printf("String Value: %s\n", data.stringValue);
        }
    }

    fclose(file);

    return 0;
}
