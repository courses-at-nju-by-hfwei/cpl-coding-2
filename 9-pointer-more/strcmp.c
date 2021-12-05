/**
 * file: strcmp.c
 *
 * Created by hengxin on 11/28/21.
 */

#include <stdio.h>

/**
 * Compare two strings.
 *
 * @param s1 The first string to compare with.
 * @param s2 The second string to compare with.
 * @return 0 if s1 equals to s2;
 *         positive if s1 is greater than s2;
 *         negative if s1 is less than s2
 */
int StrCmp(const char *s1, const char *s2);
int StrCmpStd(const char *s1, const char *s2);

int main() {
  const char *str1 = "hi, hengxin";
  const char *str2 = "hi, ant";

  printf("%s %c %s\n",
         str1, StrCmp(str1, str2) > 0 ? '>' : '<', str2);

  return 0;
}

int StrCmp(const char *s1, const char *s2) {
}

int StrCmpStd(const char *s1, const char *s2) {
}
