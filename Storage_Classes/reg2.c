#include <stdio.h>
#include <time.h>

// Function to perform a computation using a register variable
int computationWithRegister(int n) {
    register int result = 0;
    
    for (int i = 1; i <= n; i++) {
        result += i;
    }
    
    return result;
}

// Function to perform a computation using a regular variable
int computationWithoutRegister(int n) {
    int result = 0;
    
    for (int i = 1; i <= n; i++) {
        result += i;
    }
    
    return result;
}

int main() {
    int n = 1000000; // Adjust the value of 'n' as needed
    clock_t start, end;
    double cpu_time_used;

    // Benchmark computation using a register variable
    start = clock();
    int result1 = computationWithRegister(n);
    end = clock();
    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("Computation with register: Result = %d, Time = %lf seconds\n", result1, cpu_time_used);

    // Benchmark computation using a regular variable
    start = clock();
    int result2 = computationWithoutRegister(n);
    end = clock();
    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("Computation without register: Result = %d, Time = %lf seconds\n", result2, cpu_time_used);

    return 0;
}
