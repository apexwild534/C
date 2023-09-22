#include <stdio.h>

// Define a structure to represent a book
struct Book {
    char title[100];
    char author[50];
    float price;
};

int main() {
    struct Book book;

    printf("Enter book title: ");
    scanf("%s", book.title);

    printf("Enter book author: ");
    scanf("%s", book.author);

    printf("Enter book price: ");
    scanf("%f", &book.price);

    printf("Book details:\n");
    printf("Title: %s\n", book.title);
    printf("Author: %s\n", book.author);
    printf("Price: %.2f\n", book.price);

    return 0;
}
