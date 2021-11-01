/**
 * Count the number of occurrences of each digit,
 * of white space characters, and of all other characters.
 *
 * Created by hengxin on 10/16/21.
 */

#include <stdio.h>
#define LEN 10

int main() {
  int digit_count[LEN] = {0};
  int ws_count = 0;
  int other_count = 0;

  /**
   * "switch-case" version
   * Note: fails to run this program in "Run"
   * See: https://youtrack.jetbrains.com/issue/CPP-5704
   * Use "Terminal" instead.
   * Or use the "input redirection" technique.
   */
  char ch;
  while (scanf("%c", &ch) != EOF) {
    switch (ch) {
      case '0': case '1': case '2': case '3': case '4':
      case '5': case '6': case '7': case '8': case '9':
        digit_count[ch - '0']++;
        break;
      case ' ': case '\n': case '\t':
        ws_count++;
        break;
      default:
        other_count++;
        break;
    }
  }

  printf("digit_count:");
  for (int i = 0; i < LEN; i++) {
    printf(" %d", digit_count[i]);
  }
  printf("\nws_count: %d\n", ws_count);
  printf("other_count: %d\n", other_count);

  return 0;
}

