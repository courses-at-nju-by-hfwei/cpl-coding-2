/**
 * file: strlen.c
 *
 * Created by hengxin on 11/28/21.
 */

#include <stdio.h>

//int StrLen(char str[]);
int StrLen(const char *str);
size_t StrLenStd(const char *s);

int main() {
  char msg[20] = "Hello World!";
  // Don't do this! UB!!!
//  msg[0] = 'N';

  printf("The length of the message \"%s\" = %d\n",
         msg, StrLen(msg));

  return 0;
}

int StrLen(const char *str) {
  int len = 0;
  while (*str++ != '\0') {
    len++;
  }

  return len;
}

size_t StrLenStd(const char *s) {
  const char * sc;
  for (sc = s; *sc != '\0'; sc++);

  return sc - s;
}
