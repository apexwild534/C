#include <stdio.h>

int main() {
    int num;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    printf("Prime factors of %d are: ", num);

    int divisor = 2;
    while (num > 1) {
        while (num % divisor == 0) {
            printf("%d ", divisor);
            num /= divisor;
        }
        divisor++;
    }

    printf("\n");

    return 0;
}
