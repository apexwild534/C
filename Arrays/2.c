#include <stdio.h>

int main() {
    int arr[] = {12, 45, 9, 72, 101, 56};
    int n = sizeof(arr) / sizeof(arr[0]);
    int max = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    printf("Largest element in the array: %d\n", max);

    return 0;
}
