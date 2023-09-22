#include <stdio.h>

// Recursive function to compute the power of a number (x^n) efficiently
double power(double x, int n) {
    if (n == 0) {
        return 1;
    } else if (n < 0) {
        return 1 / power(x, -n);
    } else {
        double halfPower = power(x, n / 2);
        if (n % 2 == 0) {
            return halfPower * halfPower;
        } else {
            return x * halfPower * halfPower;
        }
    }
}

int main() {
    double base;
    int exponent;
    printf("Enter the base and exponent: ");
    scanf("%lf %d", &base, &exponent);

    double result = power(base, exponent);
    printf("%.2lf^%d is %.2lf\n", base, exponent, result);

    return 0;
}
