#include <stdio.h>

int main() {
    int number, isPrime = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    if (number <= 1) {
        printf("Prime numbers are greater than 1.\n");
    } else {
        for (int i = 2; i <= number / 2; i++) {
            if (number % i == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime) {
            printf("%d is a prime number.\n", number);
        } else {
            printf("%d is not a prime number.\n", number);
        }
    }

    return 0;
}
