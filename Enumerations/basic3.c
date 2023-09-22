#include <stdio.h>

// Define an enumeration for simple shapes
enum Shapes {
    Circle, Square, Triangle
};

int main() {
    int shapeChoice;

    printf("Select a shape (0 for Circle, 1 for Square, 2 for Triangle): ");
    scanf("%d", &shapeChoice);

    double area;

    switch (shapeChoice) {
        case Circle:
            {
                double radius;
                printf("Enter the radius of the circle: ");
                scanf("%lf", &radius);
                area = 3.14159265359 * radius * radius; // Approximation of pi
                break;
            }
        case Square:
            {
                double sideLength;
                printf("Enter the side length of the square: ");
                scanf("%lf", &sideLength);
                area = sideLength * sideLength;
                break;
            }
        case Triangle:
            {
                double base, height;
                printf("Enter the base length of the triangle: ");
                scanf("%lf", &base);
                printf("Enter the height of the triangle: ");
                scanf("%lf", &height);
                area = 0.5 * base * height;
                break;
            }
        default:
            printf("Invalid shape choice.\n");
            return 1;
    }

    printf("Area of the selected shape: %.2lf\n", area);

    return 0;
}
