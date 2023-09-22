#include <stdio.h>
#include <math.h>

int main() {
    double dividend, divisor;
    
    printf("Enter the dividend: ");
    scanf("%lf", &dividend);
    
    printf("Enter the divisor: ");
    scanf("%lf", &divisor);
    
    // Calculate the remainder using the fmod function
    double remainder = fmod(dividend, divisor);
    
    printf("Remainder: %.2lf\n", remainder);
    
    return 0;
}
