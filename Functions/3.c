#include <stdio.h>
#include <math.h>

// Function to calculate the area of a circle
double areaOfCircle(double radius) {
    return 3.14*radius * radius;
}

int main() {
    double radius;
    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);

    if (radius < 0) {
        printf("Radius cannot be negative.\n");
    } else {
        double result = areaOfCircle(radius);
        printf("Area of the circle with radius %.2lf is %.2lf\n", radius, result);
    }

    return 0;
}
