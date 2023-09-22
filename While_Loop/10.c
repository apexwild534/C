#include <stdio.h>

int main() {
    int numRows, row, col, coef = 1;

    printf("Enter the number of rows for Pascal's Triangle: ");
    scanf("%d", &numRows);

    while (row < numRows) {
        int spaces = numRows - row - 1;

        while (spaces > 0) {
            printf("  ");
            spaces--;
        }

        col = 0;
        while (col <= row) {
            if (col == 0 || row == 0) {
                coef = 1;
            } else {
                coef = coef * (row - col + 1) / col;
            }
            printf("%4d", coef);
            col++;
        }

        printf("\n");
        row++;
    }

    return 0;
}
