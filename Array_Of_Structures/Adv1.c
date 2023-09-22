#include <stdio.h>
#include <string.h>

// Define a structure to represent a book
struct Book {
    int bookID;
    char title[100];
    char author[50];
    int year;
};

// Function to display book details
void displayBook(struct Book book) {
    printf("Book ID: %d\n", book.bookID);
    printf("Title: %s\n", book.title);
    printf("Author: %s\n", book.author);
    printf("Year: %d\n", book.year);
}

int main() {
    struct Book library[100]; // Assume a maximum of 100 books in the library
    int numBooks = 0;

    while (1) {
        printf("\nLibrary Management System\n");
        printf("1. Add a book\n");
        printf("2. Update book details\n");
        printf("3. Delete a book\n");
        printf("4. Search for a book\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        
        int choice;
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (numBooks < 100) {
                    printf("Enter book details:\n");
                    printf("Book ID: ");
                    scanf("%d", &library[numBooks].bookID);

                    printf("Title: ");
                    scanf("%s", library[numBooks].title);

                    printf("Author: ");
                    scanf("%s", library[numBooks].author);

                    printf("Year: ");
                    scanf("%d", &library[numBooks].year);

                    numBooks++;
                    printf("Book added successfully.\n");
                } else {
                    printf("Library is full. Cannot add more books.\n");
                }
                break;
                
            case 2:
                // Add code to update book details here
                break;

            case 3:
                // Add code to delete a book here
                break;

            case 4:
                // Add code to search for a book here
                break;

            case 5:
                return 0;
                
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
