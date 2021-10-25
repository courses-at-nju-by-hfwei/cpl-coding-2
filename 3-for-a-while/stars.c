/**
 * Print a Star Pyramid Pattern of `n` rows.
 * For instance, if n = 5, you should print
 *        *
 *       ***
 *      *****
 *     *******
 *    *********
 * Created by hengxin on 10/16/21.
 */

#include <stdio.h>

int main() {
  int rows;
  scanf("%d", &rows);

  for (int i = 1; i <= rows; i++) {
    for (int j = 1; j <= rows - i; j++) {
      printf(" ");
    }

    for (int j = 1; j <= 2 * i - 1; j++) {
      printf("*");
    }

    for (int j = 1; j <= rows - i; j++) {
      printf(" ");
    }

    if (i != rows) {
      printf("\n");
    }
  }

  return 0;
}