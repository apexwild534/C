#include <stdio.h>

// Function to find the largest element in an integer array using pointers
int findLargest(int *arr, int size) {
    int largest = *arr;  // Initialize with the first element

    for (int i = 1; i < size; i++) {
        if (*(arr + i) > largest) {
            largest = *(arr + i);
        }
    }

    return largest;
}

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter elements into the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Call the findLargest function with a pointer to the array
    int largest = findLargest(arr, size);

    printf("Largest element in the array: %d\n", largest);

    return 0;
}
