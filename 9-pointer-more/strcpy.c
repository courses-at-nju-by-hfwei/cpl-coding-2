/**
 * file: strcpy.c
 *
 * Created by hengxin on 11/28/21.
 */

#include <string.h>
#include <stdio.h>

int main() {
  const char *src = "Hello World";
  char dest[strlen(src) + 1];

  StrCpy(dest, src);
  printf("dest = %s\n", dest);

  return 0;
}