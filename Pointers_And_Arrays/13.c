#include <stdio.h>

// Function to perform binary search on a sorted array using pointers
int binarySearch(int *arr, int size, int key) {
    int left = 0;
    int right = size - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (*(arr + mid) == key) {
            return mid; // Element found, return its index
        } else if (*(arr + mid) < key) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1; // Element not found
}

int main() {
    int size;
    printf("Enter the size of the sorted array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter elements into the sorted array:\n");
        for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int key;
    printf("Enter the element to search: ");
    scanf("%d", &key);

    // Call the binarySearch function with a pointer to the array
    int index = binarySearch(arr, size, key);

    if (index != -1) {
        printf("Element found at index %d.\n", index);
    } else {
        printf("Element not found in the array.\n");
    }

    return 0;
}

