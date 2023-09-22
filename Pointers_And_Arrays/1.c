#include <stdio.h>

// Function to find the sum of elements in an integer array using pointers
int arraySum(int *arr, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += *arr;
        arr++; // Move to the next element
    }
    return sum;
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

    // Call the arraySum function with a pointer to the array
    int sum = arraySum(arr, size);

    printf("Sum of elements in the array: %d\n", sum);

    return 0;
}
