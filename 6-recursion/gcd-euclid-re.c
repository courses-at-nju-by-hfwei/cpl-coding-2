/**
 * file: gcd-euclid.c
 *
 * Euclid's algorithm:
 *
 * if a > b
 * then gcd(a, b) = gcd(a - b, b)
 * else gcd(a, b) = gcd(a, b - a)
 *
 * Created by hengxin on 11/14/21.
 */

#include <stdio.h>

int GCDEuclid(int a, int b);

int main() {
  int a;
  int b;
  scanf("%d %d", &a, &b);

  printf("gcd(%d, %d) = %d\n", a, b, GCDEuclid(a, b));

  return 0;
}