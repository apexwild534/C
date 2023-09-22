#include <stdio.h>

// Function to calculate the factorial of a number using recursion
int factorial(int n) {
    if (n <= 1) {
        return 1; // Base case: factorial of 0 and 1 is 1
    } else {
        return n * factorial(n - 1); // Recursive call
    }
}

int main() {
    int num;

    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    // Using auto variables (local variables)
    auto int localVar1 = 10;
    auto double localVar2 = 3.14;
    
    printf("Local Variables: localVar1=%d, localVar2=%.2lf\n", localVar1, localVar2);

    printf("Factorial of %d is %d\n", num, factorial(num));

    return 0;
}
