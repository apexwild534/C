#include <stdio.h>
#include <string.h>

// Define a structure to represent an employee
struct Employee {
    char name[50];
    int employeeID;
    float salary;
};

int main() {
    struct Employee employees[5]; // Assuming a maximum of 5 employees

    // Input employee details
    for (int i = 0; i < 5; i++) {
        printf("Enter details for Employee %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", employees[i].name);
        printf("Employee ID: ");
        scanf("%d", &employees[i].employeeID);
        printf("Salary: ");
        scanf("%f", &employees[i].salary);
    }

    // Find the employee with the highest salary
    struct Employee highestPaid = employees[0];
    for (int i = 1; i < 5; i++) {
        if (employees[i].salary > highestPaid.salary) {
            highestPaid = employees[i];
        }
    }

    // Display the employee with the highest salary
    printf("\nEmployee with Highest Salary:\n");
    printf("Name: %s\n", highestPaid.name);
    printf("Employee ID: %d\n", highestPaid.employeeID);
    printf("Salary: %.2f\n", highestPaid.salary);

    return 0;
}
