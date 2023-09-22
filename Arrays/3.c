#include <stdio.h>

int main() {
    float arr[] = {1.5, 2.5, 3.5, 4.5, 5.5};
    int n = sizeof(arr) / sizeof(arr[0]);
    float sum = 0;

    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    float average = sum / n;

    printf("Average of array elements: %.2f\n", average);

    return 0;
}
