/**
 * file: gcd-euclid-iter.c
 *
 * Created by hengxin on 11/14/21.
 */

#include <stdio.h>

int main() {
  int a;
  int b;
  scanf("%d %d", &a, &b);

  while (a != b) {
    if (a > b) {
      a = a - b;
    } else {
      b = b - a;
    }
  }

  printf("%d\n", a);

  return 0;
}
