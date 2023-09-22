#include <stdio.h>

int main() {
    FILE *file;
    char line[100];

    file = fopen("message.txt", "r");

    if (file == NULL) {
        printf("File not found or could not be opened.\n");
        return 1;
    }

    while (fgets(line, sizeof(line), file)) {
        printf("%s", line);
    }

    fclose(file);

    return 0;
}
