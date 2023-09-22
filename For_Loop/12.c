#include <stdio.h>

int main() {
    int number;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    printf("Prime factors of %d are: ", number);

    for (int divisor = 2; number > 1; divisor++) {
        while (number % divisor == 0) {
            printf("%d ", divisor);
            number /= divisor;
        }
    }

    printf("\n");

    return 0;
}
