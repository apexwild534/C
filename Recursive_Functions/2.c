#include <stdio.h>

// Recursive function to find the nth Fibonacci number
unsigned long long fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int n;
    printf("Enter the value of n to find the nth Fibonacci number: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Fibonacci is not defined for negative numbers.\n");
    } else {
        unsigned long long result = fibonacci(n);
        printf("The %dth Fibonacci number is %llu\n", n, result);
    }

    return 0;
}
