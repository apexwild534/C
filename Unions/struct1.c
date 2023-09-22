#include <stdio.h>
#include <string.h>

// Define a union for storing either a phone number or an email address
union ContactInfo {
    int phoneNumber;
    char emailAddress[50];
};

// Define a structure representing a person with a name and contact information
struct Person {
    char name[50];
    union ContactInfo contact;
};

int main() {
    int numPersons;
    printf("Enter the number of people: ");
    scanf("%d", &numPersons);

    // Create an array of Person structures
    struct Person people[numPersons];

    // Input contact information for each person
    for (int i = 0; i < numPersons; i++) {
        printf("Enter name for person %d: ", i + 1);
        scanf("%s", people[i].name);

        printf("Select contact type (0 for phone number, 1 for email address): ");
        int contactType;
        scanf("%d", &contactType);

        if (contactType == 0) {
            printf("Enter phone number: ");
            scanf("%d", &people[i].contact.phoneNumber);
        } else if (contactType == 1) {
            printf("Enter email address: ");
            scanf("%s", people[i].contact.emailAddress);
        } else {
            printf("Invalid contact type.\n");
            return 1;
        }
    }

    // Display contact information for each person
    printf("Contact Information:\n");
    for (int i = 0; i < numPersons; i++) {
        printf("Person %d\n", i + 1);
        printf("Name: %s\n", people[i].name);

        if (strcmp(people[i].contact.emailAddress, "") != 0) {
            printf("Email Address: %s\n", people[i].contact.emailAddress);
        } else {
            printf("Phone Number: %d\n", people[i].contact.phoneNumber);
        }

        printf("\n");
    }

    return 0;
}
