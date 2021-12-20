/**
 * file: ll.c
 *
 * It contains the implementation of the linked list.
 *
 * Created by hengxin on 12/20/21.
 */

#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include "ll.h"

void Init(LinkedList *list) {
  list->head = NULL;
  list->tail = NULL;
}

bool IsEmpty(LinkedList *list) {
  return list->head == NULL;
}

bool IsSingleton(LinkedList *list) {
  return (! IsEmpty(list)) && (list->head == list->tail);
}

int HeadVal(LinkedList *list) {
  if (IsEmpty(list)) {
    return -1;
  }

  return list->head->val;
}

void Append(LinkedList *list, int val) {
  Node *node = malloc(sizeof *node);
  if (node == NULL) {
    printf("Error: malloc failed in Append()\n");
    return;
  }
  node->val = val;

  if (list->tail == NULL) {
    list->head = node;
  } else {
    list->tail->next = node;
  }
  node->next = list->head;
  list->tail = node;
}

void Delete(LinkedList *list, Node *prev) {
  Node *cur = prev->next;
  Node *next = cur->next;
  prev->next = next;

  if (cur == prev) {
    list->head = NULL;
    list->tail = NULL;
    return; // added after class
  }

  if (cur == list->head) {
    list->head = next;
  }

  if (cur == list->tail) {
    list->tail = prev;
  }

  free(cur);
}

void Print(LinkedList *list) {
  if (IsEmpty(list)) {
    return;
  }

  Node *iter = list->head;
  do {
    printf("%d\t", iter->val);
    iter = iter->next;
  } while (iter != list->head);
}

void Free(LinkedList *list) {
  while (! IsEmpty(list)) {
    Delete(list, list->head);
  }
}

