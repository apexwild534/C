#include <stdio.h>

int main() {
    int num1, num2, num3;
    
    // Prompt the user to enter three numbers
    printf("Enter three integers: ");
    
    // Read the three numbers from the user
    scanf("%d %d %d", &num1, &num2, &num3);
    
    // Find the maximum among the three numbers
    int max = num1;  // Assume the first number is the maximum
    
    if (num2 > max) {
        max = num2;  // Update max if the second number is greater
    }
    
    if (num3 > max) {
        max = num3;  // Update max if the third number is greater
    }
    
    // Print the maximum number
    printf("The maximum number is: %d\n", max);
    
    return 0;
}
