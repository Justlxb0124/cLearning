//
// Created by lxb on 2021/12/19.
//

#include "include/io_utils.h"
#include <stdio.h>
#include <stdlib.h>

typedef struct ListNode {
  int value;
  struct ListNode *next;
} ListNode;

ListNode *CreateNode(int value) {
  ListNode *node = malloc(sizeof(ListNode));
  if (!node) exit(1);

  node->value = value;
  node->next = NULL;
  return node;
}

void DestroyNode(ListNode **node_ptr) {
  (*node_ptr)->next = NULL;
  // 清理内存
  free(*node_ptr);
  // 指针也要置 NULL，因为所指向的内存虽然已经被清理，但是指针仍然指向它
  *node_ptr = NULL;
}

ListNode *CreateList(int array[], int length) {
  if (length <= 0) return NULL;

  ListNode *head = CreateNode(array[0]);
  ListNode *current = head;
  for (int i = 1; i < length; ++i) {
    current->next = CreateNode(array[i]);
    current = current->next;
  }
  return head;
}

void PrintList(ListNode *head) {
  while (head) {
    printf("%d, ", head->value);
    head = head->next;
  }
  printf("\n");
}

void DestroyList(ListNode **head) {
  if (!head || !(*head)) return;

  ListNode *current = *head;
  while (current) {
    ListNode *to_be_destroy = current;
    current = current->next;
    DestroyNode(&to_be_destroy);
  }
}

void InsertNode(ListNode **head, int value, int index) {
  if (!head || index < 0) return;
  ListNode *new_node = CreateNode(value);
  if (index == 0) {
    new_node->next = *head;
    *head = new_node;
  } else {
    if (!(*head)) {
      *head = CreateNode(0);
    }
    ListNode *current = *head;
    while (index > 1) {
      if (!current->next) {
        current->next = CreateNode(0);
      }
      current = current->next;
      index--;
    }
    new_node->next = current->next;
    current->next = new_node;
  }
}

int main() {
  int array[] = {0, 1, 2, 3, 4};
  ListNode *head = CreateList(array, 5);
  PrintList(head);
  InsertNode(&head, 100, 3);
  InsertNode(&head, 200, 0);
  InsertNode(&head, 300, 9);
  InsertNode(&head, 400, 10);
  PrintList(head);
  DestroyList(&head);
  PRINT_HEX(head);
  return 0;
}
