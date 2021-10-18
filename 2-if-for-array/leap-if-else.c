//
// Created by hengxin on 10/18/21.
//

#include <stdio.h>
int main() {
  int year = 0;
  scanf("%d", &year);

  if (year % 4 == 0) {
    if (year % 100 == 0) {
      if (year % 400 == 0) {
        printf("The year %d is a leap year.\n", year);
      } else {
        printf("The year %d is a common year.\n", year);
      }
    } else {
      printf("The year %d is a leap year.\n", year);
    }
  } else {
    printf("The year %d is a common year.\n", year);
  }

  return 0;
}

