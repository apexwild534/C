#include <stdio.h>

// Macro to find the maximum of two numbers
#define MAX(a, b) ((a) > (b) ? (a) : (b))

int main() {
    int num1 = 10, num2 = 7;
    int max = MAX(num1, num2);

    printf("The maximum of %d and %d is %d\n", num1, num2, max);

    return 0;
}
