#include <stdio.h>

// Function to find the maximum element in an integer array using pointers
int findMax(int *arr, int size) {
    int max = *arr;
    for (int i = 1; i < size; i++) {
        if (*(arr + i) > max) {
            max = *(arr + i);
        }
    }
    return max;
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

    // Call the findMax function with a pointer to the array
    int max = findMax(arr, size);

    printf("Maximum element in the array: %d\n", max);

    return 0;
}
