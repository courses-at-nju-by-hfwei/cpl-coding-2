//
// Created by hengxin on 10/18/21.
//

#include <stdio.h>
int main() {
  /**
   * declare an array of 5 integers
   * all initialized to 0
   * numbers[0], numbers[1], ..., numbers[4]
   */
  int numbers[5];

  /**
   * array member access: numbers[i]
   * []: subscript operator
   * Note: index from 0, not 1
   */
  for (int i = 0; i < 5; i++) {
    printf("%d\t", numbers[i]);
  }
  printf("\n");

  for (int i = 0; i < 5; i++) {
    scanf("%d", &numbers[i]);
  }

  for (int i = 0; i < 5; i++) {
    printf("%d\t", numbers[i]);
  }
  printf("\n");

  int min = numbers[0];
  for (int i = 1; i < 5; i++) {
    if (min > numbers[i]) {
      min = numbers[i];
    }
  }

  printf("min = %d\n", min);

  return 0;
}
