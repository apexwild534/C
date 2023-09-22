#include <stdio.h>

// Function to generate Fibonacci numbers using recursion and memoization
int fibonacci(int n) {
    static int memo[50]; // Static array for memoization, assuming max n is 49

    if (n <= 1) {
        return n;
    }

    // Check if the value is already memoized
    if (memo[n] != 0) {
        return memo[n];
    }

    memo[n] = fibonacci(n - 1) + fibonacci(n - 2);
    return memo[n];
}

int main() {
    int num;

    printf("Enter the number of Fibonacci numbers to generate: ");
    scanf("%d", &num);

    for (int i = 0; i < num; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");

    return 0;
}
