// can't use double M_PI.
#include <stdio.h>

int main() {
    double base, height, area;

    printf("Enter the base of the triangle: ");
    scanf("%lf", &base);

    printf("Enter the height of the triangle: ");
    scanf("%lf", &height);

    // Calculate the area of the triangle
    area = 0.5 * base * height;

    printf("Area of the triangle: %.2lf\n", area);

    return 0;
}
