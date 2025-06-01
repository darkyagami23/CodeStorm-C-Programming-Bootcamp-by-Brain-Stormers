#include <stdio.h>
char square[10] = {"o","1","2","3","4","5","6","7","8","9"};
void displayBoard() {
    printf(" %c | %c | %c\n", square[1], square[2], square[3]);
    printf("---|---|---\n");
    printf(" %c | %c | %c\n", square[4], square[5], square[6]);
    printf("---|---|---\n");
    printf(" %c | %c | %c\n", square[7], square[8], square[9]);
}