/**
 * file: compare.c
 * See https://randomascii.wordpress.com/2012/02/25/comparing-floating-point-numbers-2012-edition/
 *
 * Created by hengxin on 11/21/21.
 */

#include <float.h>
#include <math.h>
#include <stdio.h>

int IsEqual(double x, double y);
int IsRelativelyEqual(double x, double y);

int main() {
  printf("%d\n", IsEqual(DBL_MAX, DBL_MAX - 100));

  printf("%f\n", DBL_MAX - (DBL_MAX - 100));

  printf("%d\n", IsRelativelyEqual(DBL_MAX, DBL_MAX - 100));

  return 0;
}

int IsEqual(double x, double y) {
  return fabs(x - y) <= DBL_EPSILON;
}

int IsRelativelyEqual(double x, double y) {
  double diff = fabs(x - y);
  x = fabs(x);
  y = fabs(y);

  double larger = (y > x) ? y : x;

  /**
   * There is an issue here ...
   * See http://realtimecollisiondetection.net/blog/?p=89
   */
  if (diff <= larger * DBL_EPSILON) {
    return 1;
  }

  return 0;
}