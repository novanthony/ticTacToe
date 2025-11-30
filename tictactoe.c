#include <stdio.h>
#include <stdbool.h>

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
        printf(" --+---+-- ");
        putchar('\n');
    }
}

void clearScreen() {
    printf("\033[2J\033[3J\033[H");
}

bool validateCoordihnate(int cordinate){
    if (cordinate == 0 || cordinate == 1 || cordinate == 2){
        return true;
    }
    return false;
}

void clear_screen(void){
    printf("\033[2J\033[3J\033[H");
}

int clearInputBuffer(void){
    int c = getchar();
    while(c != '\n'){
        if(c == EOF){
            return c;
        }
        c = getchar();
    }
    return 0;
}
