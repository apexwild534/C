#include <stdio.h>

// Define a structure to represent a student
struct Student {
    char name[50];
    int rollNumber;
    float marks;
};

int main() {
    int numStudents;
    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

    struct Student students[numStudents];

    // Input student information
    for (int i = 0; i < numStudents; i++) {
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", students[i].name);

        printf("Enter roll number of %s: ", students[i].name);
        scanf("%d", &students[i].rollNumber);

        printf("Enter marks of %s: ", students[i].name);
        scanf("%f", &students[i].marks);
    }

    // Calculate average marks
    float totalMarks = 0;
    for (int i = 0; i < numStudents; i++) {
        totalMarks += students[i].marks;
    }

    float averageMarks = totalMarks / numStudents;
    printf("Average marks of the students: %.2f\n", averageMarks);

    return 0;
}
