#include <stdio.h>
#include <math.h>

// Function to calculate the roots of a quadratic equation
void findRoots(double a, double b, double c) {
    double discriminant = b * b - 4 * a * c;
    double realPart, imaginaryPart;

    if (discriminant > 0) {
        double root1 = (-b + sqrt(discriminant)) / (2 * a);
        double root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Two distinct real roots: root1 = %.2lf, root2 = %.2lf\n", root1, root2);
    } else if (discriminant == 0) {
        double root1 = -b / (2 * a);
        printf("One real root: root1 = %.2lf\n", root1);
    } else {
        realPart = -b / (2 * a);
        imaginaryPart = sqrt(-discriminant) / (2 * a);
        printf("Complex roots: root1 = %.2lf + %.2lfi, root2 = %.2lf - %.2lfi\n", realPart, imaginaryPart, realPart, imaginaryPart);
    }
}

int main() {
    double a, b, c;
    printf("Enter the coefficients (a, b, and c) of the quadratic equation (ax^2 + bx + c = 0):\n");
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a == 0) {
        printf("This is not a quadratic equation (a cannot be zero).\n");
    } else {
        findRoots(a, b, c);
    }

    return 0;
}
