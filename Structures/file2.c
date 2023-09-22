#include <stdio.h>
#include <string.h>

// Define a structure to represent a book
struct Book {
    char title[100];
    char author[50];
    float price;
};

// Function to compare books based on price for sorting
int compareBooks(const void *a, const void *b) {
    return (*(struct Book *)a).price - (*(struct Book *)b).price;
}

int main() {
    FILE *file;
    int numBooks;

    // Open the file for reading
    file = fopen("book_records.txt", "r");
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    // Read the number of books from the file
    fscanf(file, "%d", &numBooks);

    // Define an array of structures to store book records
    struct Book books[numBooks];

    // Read book records from the file
    for (int i = 0; i < numBooks; i++) {
        fscanf(file, "%s %s %f", books[i].title, books[i].author, &books[i].price);
    }

    // Close the file
    fclose(file);

    // Sort books by price
    qsort(books, numBooks, sizeof(struct Book), compareBooks);

    // Display sorted books
    printf("Books sorted by price:\n");
    for (int i = 0; i < numBooks; i++) {
        printf("Title: %s\n", books[i].title);
        printf("Author: %s\n", books[i].author);
        printf("Price: %.2f\n", books[i].price);
        printf("\n");
    }

    return 0;
}
