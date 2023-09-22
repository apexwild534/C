#include <stdio.h>

int main() {
    int limit;

    printf("Enter the limit for Pythagorean triples: ");
    scanf("%d", &limit);

    printf("Pythagorean triples up to %d:\n", limit);

    int a, b, c;
    a = 1;

    while (a <= limit) {
        b = a + 1;

        while (b <= limit) {
            c = b + 1;

            while (c <= limit) {
                if (a * a + b * b == c * c) {
                    printf("(%d, %d, %d)\n", a, b, c);
                }
                c++;
            }

            b++;
        }

        a++;
    }

    return 0;
}
