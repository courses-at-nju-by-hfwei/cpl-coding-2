/**
 * file: merge-sort.c
 *
 * Created by hengxin on 11/14/21.
 */

#include <stdio.h>

#define LEN 8

int main() {
//int numbers[LEN] = {5, 2, 4, 7, 1, 3, 2, 6};
  int numbers[LEN] = {6, 5, 3, 1, 8, 7, 2, 4};
  int numbers_copy[LEN] = {0};

  for (int i = 0; i < LEN; i++) {
    printf("%d ", numbers[i]);
  }

  return 0;
}