/**
 * Given an positive integer value, to return its number of digits.
 *
 * Created by hengxin on 10/23/21.
 */

#include <stdio.h>

int main() {
  int number = 0;
  scanf("%d", &number);

  int num_of_digits = 0;

  /**
   * "do-while" version
   */
  do {
    number /= 10;
    num_of_digits++;
  } while (number > 0);

  printf("Number of digits is %d.\n", num_of_digits);

  return 0;
}
