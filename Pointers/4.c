#include <stdio.h>

// Function to initialize an integer array using pointers
void initializeArray(int *arr, int size, int value) {
    for (int i = 0; i < size; i++) {
        *(arr + i) = value;
    }
}

int main() {
    int size, value;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    printf("Enter the value to initialize the array with: ");
    scanf("%d", &value);

    int arr[size];

    // Call the initializeArray function with a pointer to the array
    initializeArray(arr, size, value);

    printf("Initialized array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
