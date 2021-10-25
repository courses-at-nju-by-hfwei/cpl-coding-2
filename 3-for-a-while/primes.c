/**
 * To generate all prime numbers less than a given number.
 *
 * Created by hengxin on 10/24/21.
 */

#include <stdio.h>
#include <math.h>

int main() {
  int max = 0;
  scanf("%d", &max);

  for (int i = 2; i <= max; i++) {
    int is_prime = 1;
    for (int j = 2; j <= ceil(sqrt(i)); j++) {
      if (i % j == 0) {
        is_prime = 0;
        break;
      }
    }

    if (is_prime) {
      printf("%d ", i);
    }

  }

  return 0;
}