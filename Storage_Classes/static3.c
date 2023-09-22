#include <stdio.h>

#define HISTORY_SIZE 100

int history[HISTORY_SIZE]; // Global array to store historical data
int index = 0;             // Global variable to track the current index

// Function to maintain a static array for historical data
void recordData(int value) {
    if (index < HISTORY_SIZE) {
        history[index++] = value;
    } else {
        printf("Historical data array is full.\n");
    }
}

int main() {
    // Simulate recording data over time
    for (int i = 1; i <= 110; i++) {
        recordData(i);
    }

    // Display the recorded data
    printf("Recorded data: ");
    for (int i = 0; i < HISTORY_SIZE; i++) {
        printf("%d ", history[i]);
    }
    printf("\n");

    return 0;
}
