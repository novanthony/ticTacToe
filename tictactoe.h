#include <stdbool.h>

#define SIZE 3

void printBoard(int board[SIZE][SIZE]);
void clearScreen();
bool validateCoordihnates(int cordinate);
void clear_screen(void);
int clearInputBuffer(void);
void updateBoard(int board[SIZE][SIZE], int row, int col, int sign);
