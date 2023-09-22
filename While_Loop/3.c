#include <stdio.h>

int main() {
    int number;

    printf("Enter a number to display its multiplication table (up to 10): ");
    scanf("%d", &number);

    printf("Multiplication table for %d using a while loop:\n", number);

    int i = 1;
    while (i <= 10) {
        printf("%d x %d = %d\n", number, i, number * i);
        i++;
    }

    return 0;
}
