/**
 * Count the number of occurrences of each digit,
 * of white space characters, and of all other characters.
 *
 * Created by hengxin on 10/16/21.
 */

/**
 * Count the number of occurrences of each digit,
 * of white space characters, and of all other characters.
 */

#include <stdio.h>
#include <ctype.h>
#define LEN 10

int main() {
  int digit_count[LEN] = {0};
  int ws_count = 0;
  int other_count = 0;

  /**
   * "if" version
   * Note: fails to run this program in "Run"
   * See: https://youtrack.jetbrains.com/issue/CPP-5704
   * Use "Terminal" instead.
   * Or use the "input redirection" technique
   */
  char ch;
  while (scanf("%c", &ch) != EOF) {
    if (isdigit(ch)) {
      digit_count[ch - '0']++;
    } else if (isspace(ch)) {
      ws_count++;
    } else {
      other_count++;
    }
  }

  printf("digit_count:");
  for (int i = 0; i < LEN; i++) {
    printf("%d : %d\n", i, digit_count[i]);
  }
  printf("\nws_count: %d\n", ws_count);
  printf("other_count: %d\n", other_count);

  return 0;
}