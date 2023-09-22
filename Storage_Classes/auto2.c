#include <stdio.h>

// Function to calculate the factorial of a number using recursion
unsigned long long factorial(int n) {
    auto unsigned long long result = 1; // Auto variable to store the result
    
    if (n <= 1) {
        return result; // Base case: factorial of 0 and 1 is 1
    } else {
        result = n * factorial(n - 1); // Recursive call
        return result;
    }
}

int main() {
    int num;

    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    // Calculate the factorial using recursion
    unsigned long long fact = factorial(num);

    printf("Factorial of %d is %llu\n", num, fact);

    return 0;
}
