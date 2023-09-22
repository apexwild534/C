#include <stdio.h>
#include <string.h>

// Define a structure to represent a book
struct Book {
    char title[100];
    char author[50];
    float price;
};

int main() {
    struct Book library[100]; // Assuming a maximum of 100 books
    int numBooks = 0;

    // Read book records from a file
    FILE *file = fopen("book_records.txt", "r");
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    while (fscanf(file, "%s %s %f", library[numBooks].title, library[numBooks].author, &library[numBooks].price) == 3) {
        numBooks++;
    }

    fclose(file);

    // Search for books by author
    char searchAuthor[50];
    printf("Enter author name to search for books: ");
    scanf("%s", searchAuthor);

    printf("Books by %s:\n", searchAuthor);
    for (int i = 0; i < numBooks; i++) {
        if (strcmp(library[i].author, searchAuthor) == 0) {
            printf("Title: %s\n", library[i].title);
            printf("Price: %.2f\n\n", library[i].price);
        }
    }

    return 0;
}
