#include <stdio.h>

// Define a structure to represent an employee
struct Employee {
    char name[50];
    float salary;
};

// Define a structure to represent a department
struct Department {
    char departmentName[50];
    struct Employee employees[50]; // Assume a maximum of 50 employees
    int numEmployees;
};

int main() {
    struct Department department;

    // Input department details
    printf("Enter department name: ");
    scanf("%s", department.departmentName);

    printf("Enter the number of employees in %s: ", department.departmentName);
    scanf("%d", &department.numEmployees);

    // Input employee details
    for (int i = 0; i < department.numEmployees; i++) {
        printf("Enter name of employee %d: ", i + 1);
        scanf("%s", department.employees[i].name);

        printf("Enter salary of %s: ", department.employees[i].name);
        scanf("%f", &department.employees[i].salary);
    }

    // Calculate the average salary for the department
    float totalSalary = 0;
    for (int i = 0; i < department.numEmployees; i++) {
        totalSalary += department.employees[i].salary;
    }

    float averageSalary = totalSalary / department.numEmployees;

    // Display department details and average salary
    printf("\nDepartment details:\n");
    printf("Department Name: %s\n", department.departmentName);
    printf("Number of Employees: %d\n", department.numEmployees);
    printf("Average Salary: %.2f\n", averageSalary);

    return 0;
}
