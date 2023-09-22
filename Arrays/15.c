#include <stdio.h>

int main() {
    int row1, col1, row2, col2;

    // Input dimensions for the first matrix
    printf("Enter the number of rows for Matrix1: ");
    scanf("%d", &row1);
    printf("Enter the number of columns for Matrix1: ");
    scanf("%d", &col1);

    // Input dimensions for the second matrix
    printf("Enter the number of rows for Matrix2: ");
    scanf("%d", &row2);
    printf("Enter the number of columns for Matrix2: ");
    scanf("%d", &col2);

    if (col1 != row2) {
        printf("Matrix multiplication is not possible. Number of columns in Matrix1 must be equal to the number of rows in Matrix2.\n");
        return 1;
    }

    int matrix1[row1][col1];
    int matrix2[row2][col2];
    int result[row1][col2];

    // Input elements for Matrix1
    printf("Enter elements for Matrix1 (%d x %d):\n", row1, col1);
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col1; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Input elements for Matrix2
    printf("Enter elements for Matrix2 (%d x %d):\n", row2, col2);
    for (int i = 0; i < row2; i++) {
        for (int j = 0; j < col2; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Perform matrix multiplication
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < col1; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    // Display the result
    printf("Result of matrix multiplication:\n");
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
