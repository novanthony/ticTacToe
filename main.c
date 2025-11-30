#include <stdio.h>
#include <stdlib.h>

#include "tictactoe.h"

int main(void){

    int board[3][3] = {
        {1,1,1},
        {0,2,0},
        {2,0,2}
    };

    int row = 0;
    int col = 0;

    printf("Insert the row: ");
    row = getchar();
    int status = clearInputBuffer();
    if(status == EOF) goto eof_error;


    printf("Insert the column: ");
    col = getchar();
    status = clearInputBuffer();
    if(status == EOF) goto eof_error;



    eof_error:
           fputs("\nReached EOF(End Of File).\n", stderr);
           return EXIT_FAILURE;

return 0;
}
