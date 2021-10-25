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
   * "while"-version
   */
  if (number == 0) {
    num_of_digits = 1;
  } else {
    while (number > 0) {
      number /= 10;
      num_of_digits++;
    }
  }

  printf("Number of digits is %d.\n", num_of_digits);

  return 0;
}
