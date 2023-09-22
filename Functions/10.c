#include <stdio.h>
#include <math.h>

// Function to calculate the area of a triangle given its three sides
double areaOfTriangle(double a, double b, double c) {
    double s = (a + b + c) / 2;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}

int main() {
    double side1, side2, side3;
    printf("Enter the lengths of the three sides of the triangle: ");
    scanf("%lf %lf %lf", &side1, &side2, &side3);

    if (side1 <= 0 || side2 <= 0 || side3 <= 0 || (side1 + side2 <= side3) || (side2 + side3 <= side1) || (side1 + side3 <= side2)) {
        printf("Triangle with these sides is not valid.\n");
    } else {
        double result = areaOfTriangle(side1, side2, side3);
        printf("Area of the triangle is %.2lf\n", result);
    }

    return 0;
}
