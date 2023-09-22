#include <stdio.h>
#include <time.h>

// Function to count the number of times it is called using a register variable
int functionWithRegister() {
    register int counter = 0;
    counter++;
    return counter;
}

int main() {
    int n = 1000000; // Adjust the number of function calls as needed
    clock_t start, end;
    double cpu_time_used;

    // Benchmark function calls using a register variable
    start = clock();
    for (int i = 0; i < n; i++) {
        functionWithRegister();
    }
    end = clock();
    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("Function calls with register variable: Time = %lf seconds\n", cpu_time_used);

    return 0;
}
