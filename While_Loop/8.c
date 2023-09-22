#include <stdio.h>

int main() {
    double a, r;
    int n;

    printf("Enter the first term (a): ");
    scanf("%lf", &a);
    printf("Enter the common ratio (r): ");
    scanf("%lf", &r);
    printf("Enter the value of n: ");
    scanf("%d", &n);

    double term = a;
    int i = 1;

    printf("Geometric progression:\n");
    while (i <= n) {
        printf("%.2lf ", term);
        term *= r;
        i++;
    }

    printf("\n");

    return 0;
}
