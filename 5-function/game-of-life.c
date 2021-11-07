/**
 * file: game-of-life.c
 *
 * Simulate "Conway's Game of Life"
 * See https://en.wikipedia.org/wiki/Conway%27s_Game_of_Life
 * Play with it: https://playgameoflife.com/
 *
 * Created by hengxin on 10/30/21.
 */

#include <stdio.h>
#include <unistd.h>
#define SIZE 6
int board[SIZE][SIZE] = {
    {0},
    {0, 1, 1, 0, 0, 0},
    {0, 1, 1, 0, 0, 0},
    {0, 0, 0, 1, 1, 0},
    {0, 0, 0, 1, 1, 0},
    {0}};

int main() {
  int old_board[SIZE + 2][SIZE + 2];
  for (int row = 0; row < SIZE + 2; row++) {
    for (int col = 0; col < SIZE + 2; col++) {
      if (row == 0 || row == SIZE + 1 || col == 0 || col == SIZE + 1) {
        old_board[row][col] = 0;
      } else {
        old_board[row][col] = board[row - 1][col - 1];
      }
    }
  }

  for (int row = 1; row <= SIZE + 1; row++) {
    for (int col = 1; col <= SIZE + 1; col++) {
      printf("%c ", old_board[row][col] ? '*' : ' ');
    }
    printf("\n");
  }
  printf("\033c");

  int new_board[SIZE + 2][SIZE + 2];

  for (int tick = 1; tick < 10; tick ++) {
    for (int row = 1; row <= SIZE; row++) {
      for (int col = 1; col <= SIZE; col++) {
        int neighbours =
            old_board[row - 1][col - 1] +
                old_board[row - 1][col] +
                old_board[row - 1][col + 1] +
                old_board[row][col - 1] +
                old_board[row][col + 1] +
                old_board[row + 1][col - 1] +
                old_board[row + 1][col] +
                old_board[row + 1][col + 1];

        if (old_board[row][col]) {
          new_board[row][col] = (neighbours == 2 || neighbours == 3);
        } else {
          new_board[row][col] = (neighbours == 3);
        }
      }
    }

    for (int row = 1; row <= SIZE; row++) {
      for (int col = 1; col <= SIZE; col++) {
        printf("%c ", new_board[row][col] ? '*' : ' ');
      }
      printf("\n");
    }

    /**
     * sleep
     * see https://stackoverflow.com/a/10923084
     */
    sleep(2);
    /**
     * Clear the console (in Linux)
     * Warning: This is not robust!!! Just for demonstration.
     * See https://stackoverflow.com/a/43884673/1833118
     *
     * In Windows, use
     *     #include <conio.h>
     *     clrscr();
     */
    printf("\033c");

    for (int row = 0; row < SIZE + 2; row++) {
      for (int col = 0; col < SIZE + 2; col++) {
        old_board[row][col] = new_board[row][col];
      }
    }

  }

  return 0;
}

