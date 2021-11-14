/**
 * Recursively computing the greatest common divisor of two integers
 *
 * Euclidean algorithm:
 * gcd(a, b) = gcd(b, a % b)
 *
 * Created by hengxin on 11/13/21.
 */

#include <stdio.h>

int GCD(int a, int b);

int main() {
  int a;
  int b;
  scanf("%d %d", &a, &b);

  printf("gcd(%d, %d) = %d\n", a, b, GCD(a, b));

  return 0;
}