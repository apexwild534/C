#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define a structure for a database record
struct Record {
    int id;
    char name[50];
    int age;
};

int main() {
    int maxSize = 100; // Maximum number of records in the database
    struct Record *database = (struct Record *)malloc(maxSize * sizeof(struct Record));
    int numRecords = 0;

    while (1) {
        printf("1. Add Record\n2. Display Records\n3. Exit\n");
        int choice;
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            if (numRecords < maxSize) {
                printf("Enter ID: ");
                scanf("%d", &database[numRecords].id);
                printf("Enter Name: ");
                scanf("%s", database[numRecords].name);
                printf("Enter Age: ");
                scanf("%d", &database[numRecords].age);
                numRecords++;
            } else {
                printf("Database is full.\n");
            }
        } else if (choice == 2) {
            printf("ID\tName\tAge\n");
            for (int i = 0; i < numRecords; i++) {
                printf("%d\t%s\t%d\n", database[i].id, database[i].name, database[i].age);
            }
        } else if (choice == 3) {
            break;
        } else {
            printf("Invalid choice.\n");
        }
    }

    free(database);
    return 0;
}
