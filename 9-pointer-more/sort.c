/**
 * file: sort.c
 *
 * Created by hengxin on 12/5/21.
 */

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>

#define LEN 10

void PrintInts(const int integers[], int len);

void PrintStrs(const char *str[], int len);

int main() {
  /**
   * Sorting an array of integers using qsort
   */
  int integers[] = { -2, 99, 0, -743, 2, INT_MIN, 4 };
  int size_of_integers = sizeof integers / sizeof *integers;

  PrintInts(integers, size_of_integers);

  /**
   * Sorting an array of strings using qsort
   */
  const char *names[LEN] = {
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

  PrintStrs(names, LEN);
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