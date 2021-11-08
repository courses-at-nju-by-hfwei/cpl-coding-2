/**
 * Merge two sorted arrays into one
 *
 * Created by hengxin on 10/30/21.
 */

#include <stdio.h>
#include <math.h>

#define LEN_L 5
#define LEN_R 6

int L[LEN_L] = {1, 3, 5, 7, 9};
int R[LEN_R] = {0, 2, 4, 6, 8, 10};

void Merge(const int left[], int left_len,
           const int right[], int right_len);

int main() {
  Merge(L, LEN_L, R, LEN_R);
  return 0;
}

void Merge(const int left[], int left_len,
           const int right[], int right_len) {
  int l = 0;
  int r = 0;

  while (l < left_len && r < right_len) {
    if (left[l] <= right[r]) {
      printf("%d ", left[l]);
      l++;
    } else {
      printf("%d ", right[r]);
      r++;
    }
  }

  while (l < left_len) {
    printf("%d ", left[l]);
    l++;
  }
  while (r < right_len) {
    printf("%d ", right[r]);
    r++;
  }
}
