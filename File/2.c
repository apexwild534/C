#include <stdio.h>

int main() {
    FILE *file;
    file = fopen("message.txt", "w");

    if (file == NULL) {
        printf("File could not be created.\n");
        return 1;
    }

    fprintf(file, "Hello, this is a message written to a file.\n");
    fclose(file);

    printf("Message has been written to message.txt.\n");

    return 0;
}
