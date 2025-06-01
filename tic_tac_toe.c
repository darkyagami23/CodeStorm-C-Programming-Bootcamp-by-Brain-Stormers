// full game file assembled from workshop; explained in live session
#include <stdio.h>

// Global Variables
char board[10] = { 'o', '1', '2', '3', '4', '5', '6', '7', '8', '9' };
int choice, player;

// Function Declarations
void displayBoard();
int checkForWin();
int makeMove(char mark);

// Main Function
int main() {
    int gameStatus;
    char mark;
    player = 1;

    do {
        displayBoard();
        player = (player % 2) ? 1 : 2;

        printf("Player %d, enter a number (1-9): ", player);
        if (scanf("%d", &choice) != 1 || choice < 1 || choice > 9) {
            printf("Invalid input! Please enter a number between 1 and 9.\n");
            while (getchar() != '\n'); // clear buffer
            continue;
        }

        mark = (player == 1) ? 'X' : 'O';

        if (!makeMove(mark)) {
            printf("Square already taken! Try again.\n");
            continue;
        }

        gameStatus = checkForWin();
        player++;

    } while (gameStatus == -1);

    displayBoard();

    if (gameStatus == 1)
        printf("==> Player %d wins!\n", --player);
    else
        printf("==> It's a draw!\n");

    return 0;
}

// Function to display the board
void displayBoard() {
    printf("\n\n\tTic Tac Toe\n");
    printf("Player 1 (X)  -  Player 2 (O)\n\n");

    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c  \n", board[1], board[2], board[3]);
    printf("_____|_____|_____\n");

    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c  \n", board[4], board[5], board[6]);
    printf("_____|_____|_____\n");

    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c  \n", board[7], board[8], board[9]);
    printf("     |     |     \n\n");
}

// Function to make a move
int makeMove(char mark) {
    if (board[choice] == '0' + choice) {
        board[choice] = mark;
        return 1;
    }
    return 0;
}

// Function to check win or draw
int checkForWin() {
    // Rows
    if (board[1] == board[2] && board[2] == board[3]) return 1;
    if (board[4] == board[5] && board[5] == board[6]) return 1;
    if (board[7] == board[8] && board[8] == board[9]) return 1;

    // Columns
    if (board[1] == board[4] && board[4] == board[7]) return 1;
    if (board[2] == board[5] && board[5] == board[8]) return 1;
    if (board[3] == board[6] && board[6] == board[9]) return 1;

    // Diagonals
    if (board[1] == board[5] && board[5] == board[9]) return 1;
    if (board[3] == board[5] && board[5] == board[7]) return 1;

    // Draw
    for (int i = 1; i <= 9; i++) {
        if (board[i] == '0' + i) return -1; // game ongoing
    }

    return 0; // draw
}
