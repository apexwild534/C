#include <stdio.h>
#include <math.h>

int main() {
    double radius, circumference;
    double M_PI=3.14;

    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);

    // Calculate the circumference using M_PI
    circumference = 2 * M_PI * radius;

    printf("Circumference of the circle: %.2lf\n", circumference);

    return 0;
}
