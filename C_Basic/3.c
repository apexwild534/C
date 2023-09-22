#include <stdio.h>

int main() {
    int num1, num2;
    
    // Prompt the user to enter the first integer
    printf("Enter the first integer: ");
    
    // Read the first integer from the user
    scanf("%d", &num1);
    
    // Prompt the user to enter the second integer
    printf("Enter the second integer: ");
    
    // Read the second integer from the user
    scanf("%d", &num2);
    
    // Calculate the sum
    int sum = num1 + num2;
    
    // Print the result
    printf("The sum of %d and %d is %d\n", num1, num2, sum);
    
    return 0;
}
