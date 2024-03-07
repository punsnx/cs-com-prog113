#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct _Node{
    int data;
    struct _Node *next;
}Node;

void insert(Node **head,int n){
    Node *cur = *head, *prev = NULL;
    Node *new_node = (Node *)malloc(sizeof(Node));
    new_node->data = n;
    new_node->next = NULL;

    if (cur == NULL && prev == NULL){
        cur = *head = new_node;
        // printf("%p\n",cur);
        return;
    }
    while(cur){
        // printf("%p %d\n",cur,cur->data);
        if (cur->data >= n) break;
        prev = cur;
        cur = cur->next;
        // printf("%d\n",cur);
    }
    if (cur && prev == NULL){
        new_node->next = cur;
        *head = new_node;
        return;
    }
    //mid and end cur || cur == NULL
    new_node->next = prev->next;
    prev->next = new_node;
    return;
}
void delete(Node ** head, int n){
    Node *cur = *head,*prev=NULL;
    while (cur != NULL && cur->data == n) {
        *head = cur->next;
        free(cur);
        cur = *head;
    }
    while (cur != NULL) {
        if (cur->data != n) {
            prev = cur;
            cur = cur->next;
        } else {
            prev->next = cur->next;
            free(cur);
            cur = prev->next;
        }
    }
} 
void print(Node ** head){
    Node *cur = *head;
    printf("[ ");
    while(cur){
        printf("%d ",cur->data);
        cur = cur->next;
    }
    printf("]\n");
}

int main(){
    char c;
    int n;
    Node *head = NULL;
    while(1){
        printf("input> ");
        scanf("\n%c",&c);
        if (c == 'q') break;
        if (c == 'i' || c == 'd') scanf("%d",&n);
        if (c == 'p') print(&head);
        else if (c == 'i') insert(&head,n);
        else if (c == 'd') delete(&head,n);
    }

    return 0;
}