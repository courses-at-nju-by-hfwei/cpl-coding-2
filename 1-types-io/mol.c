//
// Created by hengxin on 10/11/21.
//

#include <stdio.h>
int main() {
  /**
   * e: exponent
   */
  const double MOL = 6.02e23;

  double quantity = 6.0 / 32 * MOL;

  /**
   * %g: %f or %e
   */
  printf("%.3e\n%.5g\n", quantity, quantity);

  return 0;
}

