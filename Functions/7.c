#include <stdio.h>

// Recursive function to calculate the nth Fibonacci number
int fibonacci(int n) {
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
        printf("Fibonacci number is not defined for negative n.\n");
    } else {
        int result = fibonacci(n);
        printf("The %dth Fibonacci number is %d\n", n, result);
    }

    return 0;
}
