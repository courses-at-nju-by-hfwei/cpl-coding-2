/**
 * file: merge-sort.c
 *
 * Created by hengxin on 11/14/21.
 */

#include <stdio.h>

//#define LEN 7
//int numbers[LEN] = {38, 27, 43, 3, 9, 82, 10};

#define LEN 10
int numbers[LEN] = {4, 2, 8, 6, 0, 5, 1, 7, 3, 9};

int main() {

  for (int i = 0; i < LEN; i++) {
    printf("%d ", numbers[i]);
  }

  return 0;
}