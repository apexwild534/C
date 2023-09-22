#include <stdio.h>
#include <math.h>

// Define a union representing a basic shape
union BasicShape {
    struct {
        char type; // 'C' for circle, 'S' for square, 'R' for rectangle
        double dimensions[2];
    };
};

// Function to calculate the area of a circle
double calculateCircleArea(double radius) {
    return M_PI * radius * radius;
}

// Function to calculate the area of a square
double calculateSquareArea(double sideLength) {
    return sideLength * sideLength;
}

// Function to calculate the area of a rectangle
double calculateRectangleArea(double length, double width) {
    return length * width;
}

int main() {
    union BasicShape shape;

    // Input shape type and dimensions
    printf("Enter shape type (C for circle, S for square, R for rectangle): ");
    scanf(" %c", &shape.type);

    if (shape.type == 'C') {
        printf("Enter circle radius: ");
        scanf("%lf", &shape.dimensions[0]);
    } else if (shape.type == 'S') {
        printf("Enter square side length: ");
        scanf("%lf", &shape.dimensions[0]);
    } else if (shape.type == 'R') {
        printf("Enter rectangle length and width: ");
        scanf("%lf %lf", &shape.dimensions[0], &shape.dimensions[1]);
    } else {
        printf("Invalid shape type.\n");
        return 1;
    }

    // Calculate and display the area
    double area;
    switch (shape.type) {
        case 'C':
            area = calculateCircleArea(shape.dimensions[0]);
            break;
        case 'S':
            area = calculateSquareArea(shape.dimensions[0]);
            break;
        case 'R':
            area = calculateRectangleArea(shape.dimensions[0], shape.dimensions[1]);
            break;
    }

    printf("Area: %.2lf\n", area);

    return 0;
}
