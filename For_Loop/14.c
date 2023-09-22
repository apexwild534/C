#include <stdio.h>
#include <math.h>

int main() {
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    double sum = 0;

    for (int i = 1; i <= n; i++) {
        sum += pow(i, i);
    }

    printf("The sum of the series is: %.0lf\n", sum);

    return 0;
}
