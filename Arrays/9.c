#include <stdio.h>

int main() {
    int n1, n2;
    
    // Input the number of elements in the first array
    printf("Enter the number of elements in the first array: ");
    scanf("%d", &n1);

    int arr1[n1];
    
    // Input elements into the first array
    printf("Enter the elements of the first array: ");
    for (int i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    // Input the number of elements in the second array
    printf("Enter the number of elements in the second array: ");
    scanf("%d", &n2);

    int arr2[n2];
    
    // Input elements into the second array
    printf("Enter the elements of the second array: ");
    for (int i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    int intersection[n1 < n2 ? n1 : n2]; // Resulting array for intersection
    int intersectionSize = 0;

    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {
            if (arr1[i] == arr2[j]) {
                // Check if the element already exists in the intersection array
                int isDuplicate = 0;
                for (int k = 0; k < intersectionSize; k++) {
                    if (arr1[i] == intersection[k]) {
                        isDuplicate = 1;
                        break;
                    }
                }

                if (!isDuplicate) {
                    intersection[intersectionSize++] = arr1[i];
                }
                break; // Move to the next element in the first array
            }
        }
    }

    // Display the intersection array
    printf("Intersection of the two arrays:\n");
    for (int i = 0; i < intersectionSize; i++) {
        printf("%d ", intersection[i]);
    }
    printf("\n");

    return 0;
}
