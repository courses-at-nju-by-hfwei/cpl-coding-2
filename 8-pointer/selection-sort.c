/**
 * file: selection-sort.c
 *
 * Created by hengxin on 11/28/21.
 */

#include <stdio.h>
#include <stdlib.h>

void SelectionSort(int arr[], int len);
void Swap(int *left, int *right);

int main() {
  /**
   * Input the array
   * Note: fails to run this program in "Run" (Ctrl + D)
   * See: https://youtrack.jetbrains.com/issue/CPP-5704
   * Use "Terminal" instead.
   */
//  int len = -1;
//  while (scanf("%d", &numbers[++len]) != EOF);

  int len = 0;
  printf("Please enter the number of integers to sort.\n");
  scanf("%d", &len);

  int *numbers = malloc(len * sizeof(*numbers));

  if (numbers == NULL) {
    printf("Error; No dynamic memory any more.\n");
    return 0;
  }

  printf("Please enter %d integers.\n", len);

  for (int i = 0; i < len; i++) {
    scanf("%d", numbers + i);
  }

  SelectionSort(numbers, len);

  printf("\n");
  for (int i = 0; i < len; i++) {
    printf("%d ", numbers[i]);
  }
  printf("\n");

  free(numbers);

  return 0;
}

void SelectionSort(int arr[], int len) {
  for (int i = 0; i < len; ++i) {
    int min = arr[i];
    int min_index = i;

    for (int j = i + 1; j < len; j++) {
      if (min > arr[j]) {
        min = arr[j];
        min_index = j;
      }
    }

    Swap(&arr[i], &arr[min_index]);
  }
}

void Swap(int *left, int *right) {
  int tmp = *left;
  *left = *right;
  *right = tmp;
}