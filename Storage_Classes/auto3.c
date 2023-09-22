#include <stdio.h>

// Function to count the number of function calls using auto storage class
int countCalls(int n) {
    auto int counter = 0; // Auto variable to count calls
    
    counter++; // Increment the call count
    return counter;
}

int main() {
    int num;

    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    // Call the function and count the number of calls
    for (int i = 1; i <= num; i++) {
        int callCount = countCalls(i);
        printf("Function called %d times for input %d\n", callCount, i);
    }

    return 0;
}
