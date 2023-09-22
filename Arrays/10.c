#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j <= high - 1; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }

    swap(&arr[i + 1], &arr[high]);
    return i + 1;
}

int kthSmallest(int arr[], int low, int high, int k) {
    if (k > 0 && k <= high - low + 1) {
        int pi = partition(arr, low, high);

                if (pi - low == k - 1) {
            return arr[pi];
        }

        if (pi - low > k - 1) {
            return kthSmallest(arr, low, pi - 1, k);
        }

        return kthSmallest(arr, pi + 1, high, k - pi + low - 1);
    }

    return -1; // Return -1 if k is out of bounds
}

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

    int k;
    printf("Enter the value of k (1-based index): ");
    scanf("%d", &k);

    if (k >= 1 && k <= n) {
        int kthSmallestElement = kthSmallest(arr, 0, n - 1, k);
        printf("The %dth smallest element is: %d\n", k, kthSmallestElement);
    } else {
        printf("Invalid value of k. Please enter a value between 1 and %d.\n", n);
    }

    return 0;
}

