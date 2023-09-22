#include <stdio.h>

// Recursive function to calculate power (x^n)
double power(double x, int n) {
    if (n == 0) {
        return 1.0;
    } else if (n > 0) {
        if (n % 2 == 0) {
            double halfPower = power(x, n / 2);
            return halfPower * halfPower;
        } else {
            return x * power(x, n - 1);
        }
    } else {
        // Negative exponent
        return 1.0 / power(x, -n);
    }
}

int main() {
    double base;
    int exponent;
    printf("Enter the base number: ");
    scanf("%lf", &base);
    printf("Enter the exponent: ");
    scanf("%d", &exponent);

    double result = power(base, exponent);

    printf("%.2lf raised to the power %d is %.2lf\n", base, exponent, result);

    return 0;
}
