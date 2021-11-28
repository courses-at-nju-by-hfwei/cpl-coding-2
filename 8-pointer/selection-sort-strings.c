/**
 * file: selection-sort-strings.c
 *
 * Created by hengxin on 11/28/21.
 */

#include <stdio.h>
#include <string.h>
#define LEN 10

void SelectionSort(char *str[], int len);
void Print(const char *str[], int len);

int main() {
  const char *names[LEN] = {
      "Luo Dayou",
      "Cui Jian",
      "Dou Wei",
      "Zhang Chu",
      "He Yong",
      "Wan Qing",
      "WuTiaoRen",
      "ZuoXiao",
      "Hu Mage",
      "Li Zhi"
  };

  Print(names, LEN);
  SelectionSort(names, LEN);
  Print(names, LEN);

  return 0;
}