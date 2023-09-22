#include <stdio.h>
#include <math.h>

int main() {
    double number, squareRoot;

    printf("Enter a number: ");
    scanf("%lf", &number);

    // Calculate the square root using sqrt function
    if (number >= 0) {
        squareRoot = sqrt(number);
        printf("Square root of %.2lf is %.2lf\n", number, squareRoot);
    } else {
        printf("Negative numbers do not have real square roots.\n");
    }

    return 0;
}
