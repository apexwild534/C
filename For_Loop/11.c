#include <stdio.h>

#define BOARD_SIZE 3

char board[BOARD_SIZE][BOARD_SIZE];
int currentPlayer = 1;

void initializeBoard() {
    for (int i = 0; i < BOARD_SIZE; i++) {
        for (int j = 0; j < BOARD_SIZE; j++) {
            board[i][j] = ' ';
        }
    }
}

void printBoard() {
    for (int i = 0; i < BOARD_SIZE; i++) {
        for (int j = 0; j < BOARD_SIZE; j++) {
            printf("%c", board[i][j]);
            if (j < BOARD_SIZE - 1) {
                printf(" | ");
            }
        }
        printf("\n");
        if (i < BOARD_SIZE - 1) {
            printf("---------\n");
        }
    }
}

int isMoveValid(int row, int col) {
    return row >= 0 && row < BOARD_SIZE && col >= 0 && col < BOARD_SIZE && board[row][col] == ' ';
}

int isGameOver() {
    // Check rows, columns, and diagonals for a win
    for (int i = 0; i < BOARD_SIZE; i++) {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ') {
            return 1;
        }
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ') {
            return 1;
        }
    }
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ') {
        return 1;
    }
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ') {
        return 1;
    }

    // Check for a draw
    for (int i = 0; i < BOARD_SIZE; i++) {
        for (int j = 0; j < BOARD_SIZE; j++) {
            if (board[i][j] == ' ') {
                return 0;
            }
        }
    }

    return -1; // Game is a draw
}

int main() {
    initializeBoard();
    int row, col;
    int gameResult = 0;

    printf("Tic-Tac-Toe Game\n");

    while (1) {
        printf("Player %d's turn\n", currentPlayer);
        printBoard();

        do {
            printf("Enter row (0-2) and column (0-2) to make your move: ");
            scanf("%d %d", &row, &col);
        } while (!isMoveValid(row, col));

        if (currentPlayer == 1) {
            board[row][col] = 'X';
            currentPlayer = 2;
        } else {
            board[row][col] = 'O';
            currentPlayer = 1;
        }

        gameResult = isGameOver();

        if (gameResult == 1) {
            printBoard();
            printf("Player %d wins!\n", currentPlayer == 1 ? 2 : 1);
            break;
        } else if (gameResult == -1) {
            printBoard();
            printf("It's a draw!\n");
            break;
        }
    }

    return 0;
}
