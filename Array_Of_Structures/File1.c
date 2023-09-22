#include <stdio.h>

// Define a structure to represent a student
struct Student {
    char name[50];
    int rollNumber;
    float marks;
};

int main() {
    struct Student classroom[100]; // Assuming a maximum of 100 students
    int numStudents = 0;

    // Read student records from a file
    FILE *file = fopen("student_records.txt", "r");
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    while (fscanf(file, "%s %d %f", classroom[numStudents].name, &classroom[numStudents].rollNumber, &classroom[numStudents].marks) == 3) {
        numStudents++;
    }

    fclose(file);

    // Calculate highest and lowest marks
    float highestMarks = classroom[0].marks;
    float lowestMarks = classroom[0].marks;

    for (int i = 1; i < numStudents; i++) {
        if (classroom[i].marks > highestMarks) {
            highestMarks = classroom[i].marks;
        }
        if (classroom[i].marks < lowestMarks) {
            lowestMarks = classroom[i].marks;
        }
    }

    // Display results
    printf("Highest Marks: %.2f\n", highestMarks);
    printf("Lowest Marks: %.2f\n", lowestMarks);

    return 0;
}
