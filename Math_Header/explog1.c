#include <stdio.h>
#include <math.h>

int main() {
    double principal, rate, time, finalAmount;

    printf("Enter the principal amount: ");
    scanf("%lf", &principal);

    printf("Enter the annual interest rate (in decimal form, e.g., 0.05 for 5%): ");
    scanf("%lf", &rate);

    printf("Enter the time period (in years): ");
    scanf("%lf", &time);

    // Calculate the final amount with compound interest formula
    finalAmount = principal * exp(rate * time);

    printf("The final amount after %.2lf years is: %.2lf\n", time, finalAmount);

    return 0;
}
