/**
 * file: sum.c
 *
 * Recursively computing the sum of an array of integers
 *
 * Created by hengxin on 11/13/21.
 */

#include <stdio.h>

#define NUM 5

int Sum(int nums[], int len);

int main() {
  int numbers[NUM] = {0};

  for (int i = 0; i < NUM; i++) {
    scanf("%d", &numbers[i]);
  }

  return 0;
}

int Sum(int nums[], int len) {
  if (len == 1) {
    return nums[0];
  }

  return nums[len - 1] + Sum(nums, len - 1);
}
