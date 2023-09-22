#include <stdio.h>

int main() {
    int num;
    
    // Prompt the user to enter an integer
    printf("Enter an integer: ");
    scanf("%d", &num);
    
    printf("Prime factors of %d are: ", num);
    
    // Find and print prime factors
    for (int i = 2; i <= num; i++) {
        while (num % i == 0) {
            printf("%d ", i);
            num /= i;
        }
    }
    
    printf("\n");
    
    return 0;
}
