#include <stdio.h>

int main() {
    int i = 1;
    int sum = 0;

    printf("Sum of even numbers from 1 to 20 using a while loop:\n");
    while (i <= 20) {
        if (i % 2 == 0) {
            sum += i;
        }
        i++;
    }
    printf("Sum: %d\n", sum);

    return 0;
}
