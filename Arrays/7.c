#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    // Input elements into the array
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int uniqueArr[n]; // To store unique elements
    int uniqueCount = 0;

    for (int i = 0; i < n; i++) {
        int isDuplicate = 0;
        for (int j = 0; j < uniqueCount; j++) {
            if (arr[i] == uniqueArr[j]) {
                isDuplicate = 1;
                break;
            }
        }

        if (!isDuplicate) {
            uniqueArr[uniqueCount++] = arr[i];
        }
    }

    printf("Array after removing duplicates:\n");
    for (int i = 0; i < uniqueCount; i++) {
        printf("%d ", uniqueArr[i]);
    }
    printf("\n");

    return 0;
}
