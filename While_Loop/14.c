#include <stdio.h>

int main() {
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    long long sum = 0;
    int i = 1;

    while (i <= n) {
        long long term = 1;
        for (int j = 1; j <= i; j++) {
            term *= i;
        }
        sum += term;
        i++;
    }

    printf("The sum of the series is: %lld\n", sum);

    return 0;
}
