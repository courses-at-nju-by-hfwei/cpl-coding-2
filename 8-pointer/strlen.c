/**
 * file: strlen.c
 *
 * Created by hengxin on 11/28/21.
 */

#include <stdio.h>

int main() {
  char msg[20] = "Hello World!";
  // Don't do this! UB!!!
  msg[0] = 'N';

  printf("The length of the message \"%s\" = %d\n",
         msg, StrLen(msg));

  return 0;
}