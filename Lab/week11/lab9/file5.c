#include <stdio.h>
#include <stdlib.h>

typedef struct _Node {
    int value;
    struct _Node * next;
} node;

void printList(node *pList) {
    node *cur = pList;
    while(cur){
        printf("%d ",cur->value);
        cur = cur->next;
    }
    printf("\n");
    return;
}

void insertNode(node **pList,int n) {
    node *cur = *pList, *prev = NULL;
    node *new_node = (node *)malloc(sizeof(node));
    new_node->value = n;
    new_node->next = NULL;

    if (cur == NULL && prev == NULL){
        cur = *pList = new_node;
        // printf("%p\n",cur);
        return;
    }
    while(cur){
        // printf("%p %d\n",cur,cur->data);
        if (cur->value >= n) break;
        prev = cur;
        cur = cur->next;
        // printf("%d\n",cur);
    }
    if (cur && prev == NULL){
        new_node->next = cur;
        *pList = new_node;
        return;
    }
    //mid and end cur || cur == NULL
    new_node->next = prev->next;
    prev->next = new_node;
    return;
}

int main() {
  int i, value;
  node *pList=NULL;

  for (i = 0; i < 10; i++) {
    scanf(" %d", &value);
    insertNode(&pList,value);
  }

  printList(pList);
}