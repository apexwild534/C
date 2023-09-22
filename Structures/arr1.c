#include <stdio.h>
#include <string.h>

// Define a structure to represent an employee
struct Employee {
    char name[50];
    int employeeID;
    float salary;
};

int main() {
    int numEmployees;
    printf("Enter the number of employees: ");
    scanf("%d", &numEmployees);

    struct Employee employees[numEmployees];

    // Input employee information
    for (int i = 0; i < numEmployees; i++) {
        printf("Enter name of employee %d: ", i + 1);
        scanf("%s", employees[i].name);

        printf("Enter employee ID of %s: ", employees[i].name);
        scanf("%d", &employees[i].employeeID);

        printf("Enter salary of %s: ", employees[i].name);
        scanf("%f", &employees[i].salary);
    }

    // Find the employee with the highest salary
    int maxSalaryIndex = 0;
    for (int i = 1; i < numEmployees; i++) {
        if (employees[i].salary > employees[maxSalaryIndex].salary) {
            maxSalaryIndex = i;
        }
    }

    // Print the employee with the highest salary
    printf("Employee with the highest salary:\n");
    printf("Name: %s\n", employees[maxSalaryIndex].name);
    printf("Employee ID: %d\n", employees[maxSalaryIndex].employeeID);
    printf("Salary: %.2f\n", employees[maxSalaryIndex].salary);

    return 0;
}
