/**
 * Bubble Sort Algorithm
 * See https://en.wikipedia.org/wiki/Bubble_sort
 *
 * Created by hengxin on 10/30/21.
 */

#include <stdio.h>

#define LEN 8
int numbers[LEN] = {6, 5, 3, 1, 8, 7, 2, 4};

int main() {
  /**
   * bubble sort
   */

  for (int i = 0; i < LEN; i++) {
    printf("%d ", numbers[i]);
  }

  return 0;
}
