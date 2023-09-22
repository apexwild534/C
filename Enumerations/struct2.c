#include <stdio.h>

// Define an enumeration for geometric shape types
enum ShapeType {
    Circle, Square, Rectangle
};

// Define a structure representing a geometric shape
struct Shape {
    enum ShapeType type;
    double dimensions[2]; // For Circle: dimensions[0] = radius; For Square/Rectangle: dimensions[0] = length, dimensions[1] = width
};

int main() {
    struct Shape userShape;

    printf("Select a shape type (0 for Circle, 1 for Square, 2 for Rectangle): ");
    scanf("%d", (int *)&userShape.type);

    switch (userShape.type) {
        case Circle:
            printf("Enter the radius of the circle: ");
            scanf("%lf", &userShape.dimensions[0]);
            break;
        case Square:
            printf("Enter the side length of the square: ");
            scanf("%lf", &userShape.dimensions[0]);
            break;
        case Rectangle:
            printf("Enter the length of the rectangle: ");
            scanf("%lf", &userShape.dimensions[0]);
            printf("Enter the width of the rectangle: ");
            scanf("%lf", &userShape.dimensions[1]);
            break;
        default:
            printf("Invalid shape type.\n");
            return 1;
    }

    printf("Shape Information:\n");
    switch (userShape.type) {
        case Circle:
            printf("Type: Circle\n");
            printf("Radius: %.2lf\n", userShape.dimensions[0]);
            break;
        case Square:
            printf("Type: Square\n");
            printf("Side Length: %.2lf\n", userShape.dimensions[0]);
            break;
        case Rectangle:
            printf("Type: Rectangle\n");
            printf("Length: %.2lf\n", userShape.dimensions[0]);
            printf("Width: %.2lf\n", userShape.dimensions[1]);
            break;
    }

    return 0;
}
