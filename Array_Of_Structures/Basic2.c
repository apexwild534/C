#include <stdio.h>

// Define a structure to represent a student
struct Student {
    char name[50];
    int rollNumber;
    float marks[3]; // Assume three subjects
};

int main() {
    // Create an array of structures to store student information
    struct Student classroom[3]; // Assume a maximum of 3 students

    // Input student details
    for (int i = 0; i < 3; i++) {
        printf("Enter details for Student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", classroom[i].name);
        printf("Roll Number: ");
        scanf("%d", &classroom[i].rollNumber);

        printf("Enter marks for three subjects:\n");
        for (int j = 0; j < 3; j++) {
            printf("Subject %d: ", j + 1);
            scanf("%f", &classroom[i].marks[j]);
        }
    }

    // Calculate and display average marks for each student
    printf("\nAverage Marks:\n");
    for (int i = 0; i < 3; i++) {
        float totalMarks = 0;
        for (int j = 0; j < 3; j++) {
            totalMarks += classroom[i].marks[j];
        }
        float averageMarks = totalMarks / 3.0;
        printf("Student %d (Roll Number %d): %.2f\n", i + 1, classroom[i].rollNumber, averageMarks);
    }

    return 0;
}
