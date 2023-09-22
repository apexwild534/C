#include <stdio.h>
#include <time.h>

// Function to measure execution time
void timeFunction() {
    static clock_t startTime = 0;

    if (startTime == 0) {
        startTime = clock();
    } else {
        clock_t endTime = clock();
        double cpuTimeUsed = ((double)(endTime - startTime)) / CLOCKS_PER_SEC;
        printf("Function execution time: %lf seconds\n", cpuTimeUsed);
    }
}

int main() {
    timeFunction();
    // Perform some time-consuming operation here
    timeFunction();

    return 0;
}
