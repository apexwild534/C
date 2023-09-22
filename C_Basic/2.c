#include <stdio.h>

int main() {
    int num;
    
    // Prompt the user to enter an integer
    printf("Enter an integer: ");
    
    // Read the integer from the user
    scanf("%d", &num);
    
    // Calculate the square
    int square = num * num;
    
    // Print the square
    printf("The square of %d is %d\n", num, square);
    
    return 0;
}
