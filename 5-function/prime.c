//
// Created by hengxin on 10/23/21.
//

#include <stdio.h>

int main() {
  int max = 0;
  scanf("%d", &max);

  for (int number = 2; number <= max; number++) {
    int is_prime = 1;
    for (int i = 2; i < number; i++) {
      if (number % i == 0) {
        is_prime = 0;
        break;
      }
    }

    if (is_prime) {
      printf("%d ", number);
    }
  }

  return 0;
}