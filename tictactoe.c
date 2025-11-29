#include <stdio.h>

#include "tictactoe.h"

void printBoard(int board[SIZE][SIZE]){
    char symbol = ' ';
    for(int i = 0; i < SIZE; i++){
        for(int j = 0; j < SIZE; j++){
            if (board[i][j] == 1) symbol = 'X';
            if (board[i][j] == 2) symbol = 'O';
            if (j == 0 || j == 1) printf(" %c |", symbol); else printf(" %c\n", symbol);
            //printf(" %c", symbol);
        }
        printf(" --------- ");
        putchar('\n');
    }
}
