#include <stdio.h>  // Standard I/O functions
#include <stdlib.h> // Standard library functions
#include <string.h> // String manipulation functions

int main() {
    // Usage of standard library functions
    printf("Hello, World!\n");
    
    int num1 = 5, num2 = 7;
    int sum = num1 + num2;
    printf("Sum of %d and %d is %d\n", num1, num2, sum);
    
    char str1[] = "Hello, ";
    char str2[] = "World!";
    strcat(str1, str2);
    printf("%s\n", str1);
    
    return 0;
}
