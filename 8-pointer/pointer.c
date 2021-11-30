/**
 * file: pointer.c
 *
 * Created by hengxin on 11/28/21.
 */

#include <stdio.h>

int main() {
  int radius = 10;
  printf("radius = %d\n", radius);
  printf("address of radius = %p\n", &radius);

  int *ptr_radius = &radius;
  printf("radius = %d\n", *ptr_radius);

  radius = 20;
  printf("radius = %d\n", radius);

  *ptr_radius = 30;
  printf("radius = %d\n", radius);

//  double circumference = 2 * 3.14 * radius;

  int radius_1 = 100;
  int *ptr_radius_1 = &radius_1;
  ptr_radius = ptr_radius_1;

  *ptr_radius_1 = 200;
  printf("radis_1 = %d\n", *ptr_radius);

  int arr[20] = {0};
//  arr++;
  int *ptr_arr = arr;
  ptr_arr++;

  return 0;
}