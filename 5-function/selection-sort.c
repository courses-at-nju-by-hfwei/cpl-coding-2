//
// Created by hengxin on 10/16/21.
//

#include <stdio.h>

#define MAX 20
int numbers[MAX] = {0};

int main() {
  /**
   * Input the array
   * Note: fails to run this program in "Run" (Ctrl + D)
   * See: https://youtrack.jetbrains.com/issue/CPP-5704
   * Use "Terminal" instead.
   */
  int len = -1;
  while (scanf("%d", &numbers[++len]) != EOF);

  /**
   * Print it out
   */
  for (int i = 0; i < len; i++) {
    printf("%d ", numbers[i]);
  }
  printf("\n");

  printf("--------------------\n");
  for (int i = 0; i < len; ++i) {
    int min = numbers[i];
    int min_index = i;

    for (int j = i + 1; j < len; j++) {
      if (min > numbers[j]) {
        min = numbers[j];
        min_index = j;
      }
    }

    printf("min = %d \t min_index = %d\n", min, min_index);

    /**
     * swap numbers[i] and numbers[min_index]
     */
    int tmp = numbers[i];
    numbers[i] = numbers[min_index];
    numbers[min_index] = tmp;

    /**
     * Print it out again
     */
    for (int i = 0; i < len; i++) {
      printf("%d ", numbers[i]);
    }
    printf("\n");
    printf("--------------------\n");
  }

  return 0;
}