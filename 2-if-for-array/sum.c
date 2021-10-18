//
// Created by hengxin on 10/18/21.
//

#include <stdio.h>
int main() {
  int n = 0;
  scanf("%d", &n);

  int sum = 0;
  /**
   * for: keyword
   * i++: i = i + 1;
   * initial: int i = 1;
   * loop 1: 1 <= 100 => sum += 1: sum = 1; i++: i = 2;
   * loop 2: 2 <= 100 => sum += 2: sum = 3; i++: i = 3;
   * loop 3: 3 <= 100 => sum += 3: sum = 6; i++: i = 4;
   * ...
   * loop 100: 100 <= 100 => sum += 100: sum = 5050; i++: i = 101;
   * loop 101: 101 <= 100 => exit the for loop
   */
  for (int i = 1; i <= n; i++) {
    /**
     * sum += i: sum = sum + i;
     * Note: it is not sum =+ i;
     */
//    sum += i;
    sum = sum + i;
  }

  printf("sum = %d.\n", sum);

  return 0;
}
