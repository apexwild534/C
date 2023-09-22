#include <stdio.h>

// Function to calculate the average of elements in a floating-point array using pointers
float arrayAverage(float *arr, int size) {
    float sum = 0;
    for (int i = 0; i < size; i++) {
        sum += *arr;
        arr++; // Move to the next element
    }
    return sum / size;
}

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    float arr[size];

    printf("Enter elements into the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%f", &arr[i]);
    }

    // Call the arrayAverage function with a pointer to the array
    float average = arrayAverage(arr, size);

    printf("Average of elements in the array: %.2f\n", average);

    return 0;
}
