//
// Created by hengxin on 10/16/21.
//

#include <stdio.h>

#define NUM 5
int numbers[NUM] = {0};

int main() {
  for (int i = 0; i < NUM; i++) {
    scanf("%d", &numbers[i]);
  }

  int min = numbers[0];
  for (int i = 1; i < NUM; i++) {
    if (numbers[i] < min) {
      min = numbers[i];
    }
  }

  printf("min = %d\n", min);

  return 0;
}