#include <stdio.h>

int longestIncreasingSubsequence(int *arr, int size) {
    int lis[size];
    int maxLis = 1; // Longest increasing subsequence length, at least 1 for each element

    for (int i = 0; i < size; i++) {
        lis[i] = 1; // Initialize LIS length for each element
        for (int j = 0; j < i; j++) {
            if (*(arr + i) > *(arr + j) && lis[i] < lis[j] + 1) {
                lis[i] = lis[j] + 1;
            }
        }
        if (lis[i] > maxLis) {
            maxLis = lis[i];
        }
    }

    return maxLis;
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

    int length = longestIncreasingSubsequence(arr, size);

    printf("Length of the longest increasing subsequence: %d\n", length);

    return 0;
}
