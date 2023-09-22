#include <stdio.h>

int main() {
    double a, r;
    int n;

    printf("Enter the first term (a): ");
    scanf("%lf", &a);

    printf("Enter the common ratio (r): ");
    scanf("%lf", &r);

    printf("Enter the term number (n): ");
    scanf("%d", &n);

    double term = a;

    for (int i = 1; i < n; i++) {
        term *= r;
    }

    printf("The %dth term of the geometric progression is: %lf\n", n, term);

    return 0;
}
