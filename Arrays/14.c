#include <stdio.h>

int longestIncreasingSubsequence(int arr[], int n) {
    int lis[n];
    int maxLis = 1;

    for (int i = 0; i < n; i++) {
        lis[i] = 1;
        for (int j = 0; j < i; j++) {
            if (arr[i] > arr[j] && lis[i] < lis[j] + 1) {
                lis[i] = lis[j] + 1;
                if (lis[i] > maxLis) {
                    maxLis = lis[i];
                }
            }
        }
    }

    return maxLis;
}

int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    // Input elements into the array
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int lengthOfLIS = longestIncreasingSubsequence(arr, n);

    printf("Length of the Longest Increasing Subsequence: %d\n", lengthOfLIS);

    return 0;
}
