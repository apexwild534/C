#include <stdio.h>
#include <stdbool.h>

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    int i = 2;
    while (i * i <= num) {
        if (num % i == 0) {
            return false;
        }
        i++;
    }
    return true;
}

int main() {
    int start, end;
    
    printf("Enter the starting and ending numbers for the range: ");
    scanf("%d %d", &start, &end);

    printf("Prime numbers in the range %d to %d:\n", start, end);
    
    while (start <= end) {
        if (isPrime(start)) {
            printf("%d ", start);
        }
        start++;
    }

    printf("\n");

    return 0;
}
