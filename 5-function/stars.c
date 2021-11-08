//
// Created by hengxin on 10/16/21.
//

#include <stdio.h>

void Print(char ch, int count);

int main() {
  int lines;
  scanf("%d", &lines);

  for (int i = 0; i < lines; i++) {
    Print(' ', lines - (i + 1));
    Print('*', 2 * i + 1);
    Print(' ', lines - (i + 1));

    if (i < lines - 1) {
      printf("\n");
    }
  }

  return 0;
}

void Print(char ch, int count) {
  for (int i = 0; i < count; i++) {
    printf("%c", ch);
  }
}
