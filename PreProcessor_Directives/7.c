#include <stdio.h>

// Macro to swap two variables of a given data type
#define SWAP(type, a, b) do { type temp = (a); (a) = (b); (b) = temp; } while (0)

int main() {
    int num1 = 5, num2 = 7;
    
    printf("Before swap: num1 = %d, num2 = %d\n", num1, num2);

    // Use the SWAP macro to swap the variables
    SWAP(int, num1, num2);

    printf("After swap: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}
