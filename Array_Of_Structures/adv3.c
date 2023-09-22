#include <stdio.h>
#include <string.h>

// Define a structure to represent an employee
struct Employee {
    int employeeID;
    char name[50];
    float salary;
};

// Function to display employee details
void displayEmployee(struct Employee employee) {
    printf("Employee ID: %d\n", employee.employeeID);
    printf("Name: %s\n", employee.name);
    printf("Salary: %.2f\n", employee.salary);
}

int main() {
    struct Employee employees[100]; // Assume a maximum of 100 employees
    int numEmployees = 0;

    while (1) {
        printf("\nEmployee Management System\n");
        printf("1. Add a new employee\n");
        printf("2. Update employee details\n");
        printf("3. Generate employee reports\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        
        int choice;
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (numEmployees < 100) {
                    printf("Enter employee details:\n");
                    printf("Employee ID: ");
                    scanf("%d", &employees[numEmployees].employeeID);

                    printf("Name: ");
                    scanf("%s", employees[numEmployees].name);

                    printf("Salary: ");
                    scanf("%f", &employees[numEmployees].salary);

                    numEmployees++;
                    printf("Employee added successfully.\n");
                } else {
                    printf("Maximum employee limit reached. Cannot add more employees.\n");
                }
                break;
                
            case 2:
                // Add code to update employee details here
                break;

            case 3:
                // Add code to generate reports here
                break;

            case 4:
                return 0;
                
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
