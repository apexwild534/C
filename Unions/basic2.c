#include <stdio.h>

// Define a union representing a student
union Student {
    struct {
        char name[50];
        int rollNumber;
        char grade;
    };
};

int main() {
    union Student student;

    // Input student information
    printf("Enter student name: ");
    scanf("%s", student.name);

    printf("Enter roll number: ");
    scanf("%d", &student.rollNumber);

    printf("Enter grade: ");
    scanf(" %c", &student.grade);

    // Display student information
    printf("Student Information:\n");
    printf("Name: %s\n", student.name);
    printf("Roll Number: %d\n", student.rollNumber);
    printf("Grade: %c\n", student.grade);

    return 0;
}
