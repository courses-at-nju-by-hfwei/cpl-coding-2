/**
 * file: sort.c
 *
 * Created by hengxin on 12/5/21.
 *
 * A good function pointer example on Riemann integration:
 * https://en.wikipedia.org/wiki/Function_pointer
 */

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>

void PrintInts(const int integers[], int len);
void PrintStrs(const char *str[], int len);

int main() {
  /**
   * Sorting an array of integers
   */
  int integers[] = { -2, 99, 0, -743, 2, INT_MIN, 4 };

  /**
   * void qsort( void *ptr, size_t count, size_t size,
            int (*comp)(const void *, const void *) );
   */

  /**
   * You can call functions indirectly via function pointers.
   */

  /**
   * Sorting an array of strings
   */
  const char *names[] = {
      "Luo Dayou",
      "Cui Jian",
      "Dou Wei",
      "Zhang Chu",
      "He Yong",
      "Wan Qing",
      "WuTiaoRen",
      "ZuoXiao",
      "Hu Mage",
      "Li Zhi"
  };
}

void PrintInts(const int integers[], int len) {
  printf("\n");
  for (int i = 0; i < len; ++i) {
    printf("%d ", integers[i]);
  }
  printf("\n");
}

void PrintStrs(const char *str[], int len) {
  printf("\n");
  for (int i = 0; i < len; i++) {
    printf("%s\n", str[i]);
  }
  printf("\n");
}