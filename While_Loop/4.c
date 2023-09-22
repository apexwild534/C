#include <stdio.h>

int main() {
    int num;
    long long factorial = 1;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        int i = 1;
        while (i <= num) {
            factorial *= i;
            i++;
        }
        printf("Factorial of %d is %lld\n", num, factorial);
    }

    return 0;
}
