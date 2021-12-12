/**
 * file: decl.c
 *
 * Created by hengxin on 12/12/21.
 */

int main() {
  char **argv;

  int *names[10];

  int (*student_score_table)[10];

  int *StrCpyStd(char *dest, const char *src);

  int (*comp)(const void *left, const void *right);

  char (*(*func(int num, char *str))[])();

  char (*(*arr[3])())[5];
}