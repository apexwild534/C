#include <stdio.h>

// Recursive function to calculate the sum of natural numbers from 1 to N
int sumOfNaturalNumbers(int n) {
    if (n == 1) {
        return 1;
    } else {
        return n + sumOfNaturalNumbers(n - 1);
    }
}

int main() {
    int n;
    printf("Enter a positive integer N: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Please enter a positive integer.\n");
    } else {
        int result = sumOfNaturalNumbers(n);
        printf("Sum of natural numbers from 1 to %d is %d\n", n, result);
    }

    return 0;
}
