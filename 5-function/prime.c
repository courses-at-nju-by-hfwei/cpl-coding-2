//
// Created by hengxin on 10/23/21.
//

#include <stdio.h>

// function declaration
/**
 * Check whether the number NUMBER is a prime number.
 * @param number The number to check.
 * @return 1 if NUMBER is a prime number, 0 otherwise.
 */
int IsPrime(int number);

int main() {
  int max = 0;
  scanf("%d", &max);

  for (int number = 2; number <= max; number++) {
    if (IsPrime(number)) {
      printf("%d ", number);
    }
  }

  return 0;
}

int IsPrime(int number) {
  for (int i = 2; i < number; i++) {
    if (number % i == 0) {
      return 0;
    }
  }

  return 1;
}
