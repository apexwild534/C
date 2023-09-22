#include <stdio.h>
#include <math.h>

int main() {
    double degrees, radians;double M_PI=3.14;

    printf("Enter an angle in degrees: ");
    scanf("%lf", &degrees);

    // Convert degrees to radians using M_PI
    radians = degrees * (M_PI / 180.0);

    printf("%.2lf degrees is equal to %.2lf radians\n", degrees, radians);

    return 0;
}
