//
// Created by hengxin on 10/18/21.
//

#include <stdio.h>
int main() {
  int a = 0;
  int b = 0;

  /**
   * &a: & "address-of operator"
   */
  scanf("%d%d", &a, &b);

  /**
   * ?: ternary operator
   */
  int min = a >= b ? b : a;
//  int min;
//  if (a >= b) {
//    min = b;
//  } else {
//    min = a;
//  }

  printf("min{%d, %d} = %d\n", a, b, min);

  return 0;
}

