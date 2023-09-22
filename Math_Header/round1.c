#include <stdio.h>
#include <math.h>

int main() {
    double number;
    
    printf("Enter a floating-point number: ");
    scanf("%lf", &number);
    
    // Round the number to the nearest integer using the round function
    int roundedNumber = round(number);
    
    printf("Rounded integer: %d\n", roundedNumber);
    
    return 0;
}
