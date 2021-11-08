//
// Created by hengxin on 10/23/21.
//

#include <stdio.h>

#define MAX 21
char string[MAX] = "";

int IsParlindrome(const char str[]);
int Len(const char str[]);

int main() {
  scanf("%20s", string);
  printf("\"%s\" is %s a parlindrome.\n", string, IsParlindrome(string) ? "" : "not");

  return 0;
}

int IsParlindrome(const char str[]) {
  for (int i = 0, j = Len(str) - 1; i < j; i++, j--) {
    if (string[i] != string[j]) {
      return 0;
    }
  }
  return 1;
}

int Len(const char str[]) {
  int len = 0;
  while (str[len] != '\0') {
    len++;
  }
  return len;
}
