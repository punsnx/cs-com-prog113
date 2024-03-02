#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct  __Node {
    int data;
    struct __Node *next;
} Node;


int main() {
    Node *head = NULL;
    insert(&head,10);
    insert(&head,20);
    insert(&head,30);
    insert(&head,40);


    return 0;
}
void insert(Node *list,int value){//append to last
    Node *node = (Node *)malloc(sizeof(Node));
    node->data = value;
    node->next = NULL;
    if (list == 0){
        list = node;
        return;
    }
    Node *current = list;
    Node *prev = NULL;
    while(current!=NULL){
        prev = current;
        current = current->next;
    }
    prev->next = node;
}
