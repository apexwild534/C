#include <stdio.h>

#define ROW1 3
#define COL1 3
#define ROW2 3
#define COL2 3

int main() {
    int matrix1[ROW1][COL1];
    int matrix2[ROW2][COL2];
    int result[ROW1][COL2];
    
    // Initialize matrix1
    printf("Enter elements for Matrix1 (%d x %d):\n", ROW1, COL1);
    for (int i = 0; i < ROW1; i++) {
        for (int j = 0; j < COL1; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }
    
    // Initialize matrix2
    printf("Enter elements for Matrix2 (%d x %d):\n", ROW2, COL2);
    for (int i = 0; i < ROW2; i++) {
        for (int j = 0; j < COL2; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }
    
    // Perform matrix multiplication
    for (int i = 0; i < ROW1; i++) {
        for (int j = 0; j < COL2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < COL1; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
    
    // Display the result
    printf("Result of matrix multiplication:\n");
    for (int i = 0; i < ROW1; i++) {
        for (int j = 0; j < COL2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
