#include <stdio.h>
#include <stdlib.h>

int main() {
    int size;

    printf("Enter the size of the integer array: ");
    scanf("%d", &size);

    // Dynamically allocate memory for the integer array
    int *arr = (int *)malloc(size * sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter %d integers:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Entered integers in the dynamically allocated array:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Free the dynamically allocated memory
    free(arr);

    return 0;
}
