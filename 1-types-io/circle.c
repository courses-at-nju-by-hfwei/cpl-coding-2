//
// Created by hengxin on 10/11/21.
//

#include <stdio.h>
int main() {
  /**
   * const: constant
   */
  const double PI = 3.14159;
  double radius; // float radius; (%f)

  /**
   * &: address-of operator
   * %d: skip the white-spaces, then identify an integer
   * %lf: skip the white-spaces, then identify a floating-point number
   *   and assign it to a variable of double type
   * count = scanf(...): the number of matched items
   */
  if (scanf("%lf", &radius) == 1) {
    printf("radius = %f\n", radius);
  }

  double circumference = 0;
  /**
   * assignment statement
   */
  circumference = 2 * PI * radius;
  double area = PI * radius * radius;

  /**
   * %f: floating-point number
   */
  printf("circumference = %.2f\narea = %.2f\n", circumference, area);

  return 0;
}

