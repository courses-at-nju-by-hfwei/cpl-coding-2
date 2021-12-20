/**
 * file: josephus.c
 *
 * Created by hengxin on 12/19/21.
 */

#include <stdio.h>
#include <assert.h>
#include "ll/ll.h"

void SitAroundCircle(LinkedList *list, int num);
void KillUntilOne(LinkedList *list);
int GetSurvivor(LinkedList *list);

#define NUM 10
int main(int argc, char *argv[]) {
  LinkedList list;
  Init(&list);

  SitAroundCircle(&list, NUM);
  Print(&list);
  KillUntilOne(&list);
  printf("\n%d: %d\n", NUM, GetSurvivor(&list));

  Free(&list);

  return 0;
}

void SitAroundCircle(LinkedList *list, int num) {
  for (int i = 1; i <= num; i++) {
    Append(list, i);
  }
}

void KillUntilOne(LinkedList *list) {
  Node *node = list->head;

  while (! IsSingleton(list)) {
    Delete(list, node);
    node = node->next;
  }
}

int GetSurvivor(LinkedList *list) {
  assert(IsSingleton(list));

  return HeadVal(list);
}