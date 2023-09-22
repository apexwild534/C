#include <stdio.h>

int main() {
    register int i; // Declare a register variable

    int sum = 0;

    // Calculate the sum of numbers from 1 to 100 using a register variable
    for (i = 1; i <= 100; i++) {
        sum += i;
    }

    printf("Sum of numbers from 1 to 100 using a register variable: %d\n", sum);

    return 0;
}
