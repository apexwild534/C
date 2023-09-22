#include <stdio.h>

// Define a structure to represent a car
struct Car {
    char make[50];
    char model[50];
    int year;
};

int main() {
    // Create an array of structures to store car information
    struct Car fleet[3]; // Assume a maximum of 3 cars

    // Input car details
    for (int i = 0; i < 3; i++) {
        printf("Enter details for Car %d:\n", i + 1);
        printf("Make: ");
        scanf("%s", fleet[i].make);
        printf("Model: ");
        scanf("%s", fleet[i].model);
        printf("Year: ");
        scanf("%d", &fleet[i].year);
    }

    // Display car details
    printf("\nCar Details:\n");
    for (int i = 0; i < 3; i++) {
        printf("Car %d\n", i + 1);
        printf("Make: %s\n", fleet[i].make);
        printf("Model: %s\n", fleet[i].model);
        printf("Year: %d\n", fleet[i].year);
        printf("\n");
    }

    return 0;
}
