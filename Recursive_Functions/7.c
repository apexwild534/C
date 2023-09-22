#include <stdio.h>

// Recursive function to find the nth term of a geometric progression (a, ar, ar^2, ...)
double nthTermOfGP(double a, double r, int n) {
    if (n == 0) {
        return a;
    } else {
        return r * nthTermOfGP(a, r, n - 1);
    }
}

int main() {
    double firstTerm, commonRatio;
    int n;
    printf("Enter the first term, common ratio, and the term number (n): ");
    scanf("%lf %lf %d", &firstTerm, &commonRatio, &n);

    double result = nthTermOfGP(firstTerm, commonRatio, n);
    printf("The %dth term of the geometric progression is %.2lf\n", n, result);

    return 0;
}
