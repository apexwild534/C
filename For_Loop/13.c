#include <stdio.h>

int main() {
    int limit;

    printf("Enter the limit for Pythagorean triples: ");
    scanf("%d", &limit);

    printf("Pythagorean triples up to %d:\n", limit);

    for (int a = 1; a <= limit; a++) {
        for (int b = a; b <= limit; b++) {
            for (int c = b + 1; c <= limit; c++) {
                if (a * a + b * b == c * c) {
                    printf("(%d, %d, %d)\n", a, b, c);
                }
            }
        }
    }

    return 0;
}
