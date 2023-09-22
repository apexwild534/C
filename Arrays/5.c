#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int searchElement = 3;
    int found = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] == searchElement) {
            found = 1;
            break;
        }
    }

    if (found) {
        printf("Element %d exists in the array.\n", searchElement);
    } else {
        printf("Element %d does not exist in the array.\n", searchElement);
    }

    return 0;
}
