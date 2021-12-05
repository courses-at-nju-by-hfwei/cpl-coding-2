/**
 * file: game-of-life-pointer.c
 *
 * Created by hengxin on 12/5/21.
 */

#include <stdio.h>
#include <unistd.h>

#define ROUND 10
#define SIZE 6
int board[SIZE][SIZE] = {
    {0},
    {0},
    {0, 0, 1, 1, 1, 0},
    {0, 1, 1, 1, 0, 0},
    {0},
    {0}};

void ExtendBoard(const int origin_board[][SIZE],
                 int extended_board[][SIZE + 2]);
void PrintExtendedBoard(const int extended_board[][SIZE + 2]);
void GenerateNewBoard(const int old_extended_board[][SIZE + 2],
                      int new_extended_board[][SIZE + 2]);
void CopyExtendedBoard(const int src_board[][SIZE + 2],
                       int dest_board[][SIZE + 2]);
void ClearTerminal(int sec);

int main() {
  int old_board[SIZE + 2][SIZE + 2];
  ExtendBoard(board, old_board);
  PrintExtendedBoard(old_board);
  ClearTerminal(1);

  int new_board[SIZE + 2][SIZE + 2];
  for (int round = 0; round < ROUND; round++) {
    GenerateNewBoard(old_board, new_board);
    PrintExtendedBoard(new_board);
    ClearTerminal(1);
    CopyExtendedBoard(new_board, old_board);
  }

  return 0;
}

void ExtendBoard(const int origin_board[][SIZE],
                 int extended_board[][SIZE + 2]) {
  for (int row = 0; row < SIZE + 2; row++) {
    for (int col = 0; col < SIZE + 2; col++) {
      if (row == 0 || row == SIZE + 1 || col == 0 || col == SIZE + 1) {
        extended_board[row][col] = 0;
      } else {
        extended_board[row][col] = origin_board[row - 1][col - 1];
      }
    }
  }
}

void PrintExtendedBoard(const int extended_board[][SIZE + 2]) {
  for (int row = 1; row < SIZE + 1; row++) {
    for (int col = 1; col < SIZE + 1; col++) {
      printf("%c ", extended_board[row][col] ? '*' : ' ');
    }
    printf("\n");
  }
}

void GenerateNewBoard(const int old_extended_board[][SIZE + 2],
                      int new_extended_board[][SIZE + 2]) {
  for (int row = 1; row < SIZE + 1; row++) {
    for (int col = 1; col < SIZE + 1; col++) {
      int neighours = old_extended_board[row - 1][col - 1]
          + old_extended_board[row - 1][col]
          + old_extended_board[row - 1][col + 1]
          + old_extended_board[row][col - 1]
          + old_extended_board[row][col + 1]
          + old_extended_board[row + 1][col - 1]
          + old_extended_board[row + 1][col]
          + old_extended_board[row + 1][col + 1];

      new_extended_board[row][col] =
          (old_extended_board[row][col] && (neighours == 2 || neighours == 3))
              || (!old_extended_board[row][col] && neighours == 3);
    }
  }
}

void CopyExtendedBoard(const int src_board[][SIZE + 2],
                       int dest_board[][SIZE + 2]) {
  for (int row = 0; row < SIZE + 2; row++) {
    for (int col = 0; col < SIZE + 2; col++) {
      dest_board[row][col] = src_board[row][col];
    }
  }
}

void ClearTerminal(int sec) {
  sleep(sec);
  printf("\033c");
}