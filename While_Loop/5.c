#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of terms for Fibonacci sequence: ");
    scanf("%d", &n);

    int term1 = 0, term2 = 1;
    int nextTerm, i = 1;

    printf("Fibonacci sequence up to the %dth term:\n", n);

    while (i <= n) {
        printf("%d, ", term1);
        nextTerm = term1 + term2;
        term1 = term2;
        term2 = nextTerm;
        i++;
    }

    printf("\n");

    return 0;
}
