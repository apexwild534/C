#include <stdio.h>

// Define a structure to represent an address
struct Address {
    char street[50];
    char city[50];
    char state[50];
    char zipCode[10];
};

// Define a structure to represent a person
struct Person {
    char name[50];
    struct Address address;
    int age;
};

int main() {
    struct Person person;

    // Input person details
    printf("Enter name: ");
    scanf("%s", person.name);

    printf("Enter address (street city state zipCode): ");
    scanf("%s %s %s %s", person.address.street, person.address.city, person.address.state, person.address.zipCode);

    printf("Enter age: ");
    scanf("%d", &person.age);

    // Display person details
    printf("\nPerson details:\n");
    printf("Name: %s\n", person.name);
    printf("Address: %s, %s, %s, %s\n", person.address.street, person.address.city, person.address.state, person.address.zipCode);
    printf("Age: %d\n", person.age);

    return 0;
}
