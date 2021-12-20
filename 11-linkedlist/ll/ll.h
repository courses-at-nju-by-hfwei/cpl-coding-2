/**
 * file: ll.h
 *
 * It contains the declarations of types and functions
 * of the linked list.
 *
 * Created by hengxin on 12/20/21.
 */

#ifndef C_PL_CODING_2_11_LINKEDLIST_LL_LL_H_
#define C_PL_CODING_2_11_LINKEDLIST_LL_LL_H_

#include <stdbool.h>
typedef struct node {
  int val;
  struct node *next;
} Node;

typedef struct ll {
  Node *head;
  Node *tail;
} LinkedList;

void Init(LinkedList *list);

bool IsEmpty(LinkedList *list);
bool IsSingleton(LinkedList *list);

int HeadVal(LinkedList *list);
Node *Search(const LinkedList *list, int val);

void Append(LinkedList *list, int val);
void Delete(LinkedList *list, Node *prev);
void Insert(LinkedList *list, Node *prev, int val);

void Print(LinkedList *list);

void Free(LinkedList *list);

#endif //C_PL_CODING_2_11_LINKEDLIST_LL_LL_H_