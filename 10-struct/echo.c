/**
 * file: echo.c
 *
 * Echo program (command-line) arguments.
 *
 * Created by hengxin on 12/12/21.
 */

#include <stdio.h>

int main(int argc, char *argv[]) {
  printf("%d\n", argc);

  /**
   * 1st version: treats argv as an array of character pointers
   */
  printf("\n");

  /**
   * 2st version: treat argv as a pointer to pointer to char
   */
  printf("\n");

  /**
   * 3rd version: use an expression as the format argument of printf
   */
  printf("\n");

  return 0;
}