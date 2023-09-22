#include <stdio.h>

// Function to calculate the determinant of a 2x2 matrix
int determinant2x2(int *mat) {
    return (*mat * *(mat + 3)) - (*(mat + 1) * *(mat + 2));
}

// Function to calculate the determinant of a square matrix using recursion
int determinant(int *mat, int size) {
    if (size == 1) {
        return *mat; // Base case for 1x1 matrix
    } else if (size == 2) {
        return determinant2x2(mat); // Base case for 2x2 matrix
    } else {
        int det = 0;
        for (int i = 0; i < size; i++) {
            int submat[(size - 1) * (size - 1)];
            int submatIndex = 0;
            for (int j = 1; j < size; j++) {
                for (int k = 0; k < size; k++) {
                    if (k != i) {
                        submat[submatIndex++] = *(mat + j * size + k);
                    }
                }
            }
            int sign = (i % 2 == 0) ? 1 : -1;
            det += sign * *(mat + i) * determinant(submat, size - 1);
        }
        return det;
    }
}

int main() {
    int size;
    printf("Enter the size of the square matrix: ");
    scanf("%d", &size);

    int mat[size][size];

    printf("Enter elements of the matrix row by row:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    // Call the determinant function with a pointer to the matrix
    int det = determinant((int *)mat, size);

    printf("Determinant of the matrix: %d\n", det);

    return 0;
}
