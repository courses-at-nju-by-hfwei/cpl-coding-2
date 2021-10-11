//
// Created by hengxin on 10/11/21.
//

#include <stdio.h>
int main() {
  /**
   * const: constant
   */
  const double PI = 3.14159;
  int radius;

  scanf("%d", &radius);

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

