#include <stdio.h>

// Function to swap the first and last elements of an integer array using pointers
void swapFirstLast(int *arr, int size) {
    if (size <= 1) {
        return; // No need to swap if the array has 0 or 1 element
    }

    int temp = *arr;
    *arr = *(arr + size - 1);
    *(arr + size - 1) = temp;
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

    // Call the swapFirstLast function with a pointer to the array
    swapFirstLast(arr, size);

    printf("Array after swapping first and last elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
