#include <stdio.h>

// Define a structure to represent a student
struct Student {
    char name[50];
    int rollNumber;
    float marks;
};

int main() {
    FILE *inputFile, *outputFile;
    int numStudents;

    // Open the input file for reading
    inputFile = fopen("student_records.txt", "r");
    if (inputFile == NULL) {
        printf("Error opening input file.\n");
        return 1;
    }

    // Read the number of students from the file
    fscanf(inputFile, "%d", &numStudents);

    // Define an array of structures to store student records
    struct Student students[numStudents];

    // Read student records from the file
    for (int i = 0; i < numStudents; i++) {
        fscanf(inputFile, "%s %d %f", students[i].name, &students[i].rollNumber, &students[i].marks);
    }

    // Close the input file
    fclose(inputFile);

    // Open the output file for writing
    outputFile = fopen("output_student_records.txt", "w");
    if (outputFile == NULL) {
        printf("Error opening output file.\n");
        return 1;
    }

    // Write student records to the output file
    fprintf(outputFile, "%d\n", numStudents);
    for (int i = 0; i < numStudents; i++) {
        fprintf(outputFile, "%s %d %.2f\n", students[i].name, students[i].rollNumber, students[i].marks);
    }

    // Close the output file
    fclose(outputFile);

    printf("Student records copied to the output file.\n");

    return 0;
}
