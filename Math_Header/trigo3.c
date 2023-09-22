#include <stdio.h>
#include <math.h>

int main() {
    double radius, centralAngle, area;
    double M_PI=3.14;

    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);

    printf("Enter the central angle (in degrees): ");
    scanf("%lf", &centralAngle);

    // Calculate the area of the sector using trigonometric functions
    area = 0.5 * radius * radius * (centralAngle * M_PI / 180.0);

    printf("Area of the sector: %.2lf square units\n", area);

    return 0;
}
