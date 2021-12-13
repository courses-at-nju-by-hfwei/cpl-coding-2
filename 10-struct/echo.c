/**
 * file: echo.c
 *
 * Echo program (command-line) arguments.
 *
 * Created by hengxin on 12/12/21.
 */

#include <stdio.h>


/**
 *
 * @param argc argument count
 * @param argv argument vector
 *  By convention, argv[0] is the name of the program
 *  By the C standard, argv[argc] is NULL.
 * @return
 */
int main(int argc, char *argv[]) {
//  printf("argc = %d\n", argc);

  /**
   * 1st version: treats argv as an array of character pointers
   */
//  for (int i = 1; i < argc; i++) {
//    printf("%s%s", argv[i], (i < argc - 1) ? " " : "");
//  }
//  printf("\n");

  /**
   * 2st version: treat argv as a pointer to pointer to char
   */
//  while (--argc > 0) {
//    printf("%s%s", *++argv, (argc > 1) ? " " : "");
//  }
//  printf("\n");

  /**
   * 3rd version: use an expression as the format argument of printf
   */
  while (--argc > 0) {
    printf((argc > 1) ? "%s " : "%s", *++argv);
  }
  printf("\n");

  return 0;
}