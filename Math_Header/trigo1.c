#include <stdio.h>
#include <math.h>

int main() {
    double side1, side2, hypotenuse;

    printf("Enter the length of side 1: ");
    scanf("%lf", &side1);

    printf("Enter the length of side 2: ");
    scanf("%lf", &side2);

    // Calculate the hypotenuse using hypot function
    hypotenuse = hypot(side1, side2);

    printf("Hypotenuse of the right-angled triangle is %.2lf\n", hypotenuse);

    return 0;
}
