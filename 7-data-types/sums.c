/**
 * file: sums.c
 * See https://randomascii.wordpress.com/2012/02/25/comparing-floating-point-numbers-2012-edition/
 *
 * Created by hengxin on 11/21/21.
 */

#include <stdio.h>

int main() {
  float f = 0.1f;
  float sum = 0.0f;

  for (int i = 0; i < 10; ++i) {
    sum += f;
  }

  float product = f * 10;

  printf("sum = %.15f\nmul = %.15f\n",
         sum, product);

  return 0;
}