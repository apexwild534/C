#include <stdio.h>
#include <math.h>

int main() {
    double radius, volume;
    double M_PI=3.14;

    printf("Enter the radius of the sphere: ");
    scanf("%lf", &radius);

    // Calculate the volume using M_PI
    volume = (4.0 / 3.0) * M_PI * pow(radius, 3);

    printf("Volume of the sphere: %.2lf\n", volume);

    return 0;
}
