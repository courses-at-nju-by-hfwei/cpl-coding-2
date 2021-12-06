/**
 * file: array-pointer.c
 *
 * Created by hengxin on 12/5/21.
 */

#include <stdio.h>

#define ROWS 5
#define COLS 3

void Print(int table[][3], int rows);

int main() {
  /**
   * C, Java, Python
   *
   * student_score_table is a 2D (two-dimensional) array.
   *
   * student_score_table is an array consiting of 5 arrays,
   * each of which consits of 3 integers.
   */
  int student_score_table[ROWS][COLS] = {
      {0, 10, 20},
      {10, 20, 30},
      {20, 30, 40},
      {30, 40, 50},
      {40, 50, 60}
  };

  printf("student_score_table[3][2] = %d\n",
         student_score_table[3][2]);
  printf("student_score_table[3][2] = %d\n",
         (*(student_score_table + 3))[2]);
  printf("student_score_table[3][2] = %d\n",
         (*(*(student_score_table + 3) + 2)));

  int (*table_ptr)[COLS] = student_score_table;
  printf("student_score_table[3][2] = %d\n",
         (*(*(table_ptr + 3) + 2)));

  Print(student_score_table, ROWS);

  return 0;
}

void Print(int (*table)[COLS], int rows) {
  printf("\n");
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < COLS; j++) {
      printf("%d ", table[i][j]);
    }
    printf("\n");
  }
}