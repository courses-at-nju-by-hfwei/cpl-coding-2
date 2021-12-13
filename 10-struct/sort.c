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

int CompareInts(const void *left, const void *right);
int CompareStrs(const void *left, const void *right);
void PrintInts(const int integers[], int len);
void PrintStrs(const char *str[], int len);

int main() {
  /**
   * Sorting an array of integers
   */
  int integers[] = { -2, 99, 0,
                     -743, 2,
                     INT_MIN, 4 };
  int size_of_integers = sizeof integers / sizeof *integers;

  int (*comp)(const void *, const void *) = CompareInts;

  /**
   * void qsort( void *ptr, size_t count, size_t size,
   *         int (*comp)(const void *, const void *) );
   */
  qsort(integers, size_of_integers, sizeof *integers,
        comp);
  PrintInts(integers, size_of_integers);

  /**
   * You can call functions indirectly via function pointers.
   */
  int a = 10;
  int b = 20;
  CompareInts(&a, &b);
  comp(&a, &b);

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
  int size_of_names = sizeof names / sizeof *names;

  comp = CompareStrs;
  qsort(names, size_of_names, sizeof *names, comp);
  PrintStrs(names, size_of_names);
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

int CompareInts(const void *left, const void *right) {
  int int_left = * (const int *) left;
  int int_right = * (const int *) right;

  if (int_left < int_right) {
    return -1;
  }

  if (int_left > int_right) {
    return 1;
  }

  return 0;
}

int CompareStrs(const void *left, const void *right) {
  char **pp1 = left;
  char **pp2 = right;

  return strcmp(*pp1, *pp2);
}
