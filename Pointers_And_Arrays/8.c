#include <stdio.h>

// Function to search for a specific element in an integer array using pointers
int searchElement(int *arr, int size, int key) {
    for (int i = 0; i < size; i++) {
        if (*arr == key) {
            return i; // Element found at index i
        }
        arr++; // Move to the next element
    }
    return -1; // Element not found
}

int main() {
    int size, key;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter elements into the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &key);

    // Call the searchElement function with a pointer to the array
    int index = searchElement(arr, size, key);

    if (index != -1) {
        printf("Element found at index %d.\n", index);
    } else {
        printf("Element not found in the array.\n");
    }

    return 0;
}
