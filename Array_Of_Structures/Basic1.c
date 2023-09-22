#include <stdio.h>

// Define a structure to represent a book
struct Book {
    char title[100];
    char author[50];
    float price;
};

int main() {
    // Create an array of structures to store book information
    struct Book library[3]; // Assume a maximum of 3 books

    // Input book details
    for (int i = 0; i < 3; i++) {
        printf("Enter details for Book %d:\n", i + 1);
        printf("Title: ");
        scanf("%s", library[i].title);
        printf("Author: ");
        scanf("%s", library[i].author);
        printf("Price: ");
        scanf("%f", &library[i].price);
    }

    // Display book details
    printf("\nBook Details:\n");
    for (int i = 0; i < 3; i++) {
        printf("Book %d\n", i + 1);
        printf("Title: %s\n", library[i].title);
        printf("Author: %s\n", library[i].author);
        printf("Price: %.2f\n", library[i].price);
        printf("\n");
    }

    return 0;
}
