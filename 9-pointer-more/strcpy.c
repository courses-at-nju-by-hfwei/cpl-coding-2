/**
 * file: strcpy.c
 *
 * Created by hengxin on 11/28/21.
 *
 * strcpy vs. strcpy_s (safe/secure; optional in C++)
 * strncpy vs. strncpy_s (optional in C11)
 * keyword "restrict"
 */

#include <string.h>
#include <stdio.h>

/**
 * Copy string at src to dest.
 * We assume that there is enough room in dest for storing src.
 *
 * @param dest
 * @param src
 */
void StrCpy(char *dest, const char *src);
void StrCpy1(char *dest, const char *src);
void StrCpy2(char *dest, const char *src);
void StrCpy3(char *dest, const char *src);
void StrCpy4(char *dest, const char *src);
char* StrCpyStd(char *dest, const char *src);

int main() {
  const char *src = "Hello World";
  char dest[strlen(src) + 1];

  StrCpy(dest, src);
  printf("dest = %s\n", dest);

  return 0;
}

void StrCpy(char *dest, const char *src) {
}

void StrCpy1(char *dest, const char *src) {
}

void StrCpy2(char *dest, const char *src) {
}

void StrCpy3(char *dest, const char *src) {
}

void StrCpy4(char *dest, const char *src) {
}

void StrCpy5(char *dest, const char *src) {
}

/**
 * @return The dest pointer
 *
 * Note: Never return pointers to local variables!!!
 */
char *StrCpyStd(char *dest, const char *src) {
}