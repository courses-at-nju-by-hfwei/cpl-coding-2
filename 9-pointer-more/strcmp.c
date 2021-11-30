/**
 * file: strcmp.c
 *
 * Created by hengxin on 11/28/21.
 */

#include <stdio.h>

int main() {
  const char *str1 = "hi, hengxin";
  const char *str2 = "hi, ant";

  printf("%s %c %s\n",
         str1, StrCmp(str1, str2) > 0 ? '>' : '<', str2);

  return 0;
}