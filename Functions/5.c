#include <stdio.h>

// Function to calculate the sum of digits in an integer
int sumOfDigits(int num) {
    int sum = 0;
    while (num != 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main() {
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);

    int result = sumOfDigits(number);
    printf("Sum of digits in %d is %d\n", number, result);

    return 0;
}
