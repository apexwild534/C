#include <stdio.h>

int main() {
    int num;
    unsigned long long factorial = 1;
    
    // Prompt the user to enter a non-negative integer
    printf("Enter a non-negative integer: ");
    scanf("%d", &num);
    
    // Calculate the factorial using a loop
    for (int i = 1; i <= num; i++) {
        factorial *= i;
    }
    
    // Print the factorial
    printf("Factorial of %d = %llu\n", num, factorial);
    
    return 0;
}
