#include <stdio.h>
#include <stdlib.h>

#define SIZE  97

typedef struct nodeType {
  int   item;
  struct nodeType* next;
} Node;

void insert(Node **head,int n){
    Node *new_node = (Node *)malloc(sizeof(Node));
    new_node->item = n;
    new_node->next = NULL;
    Node *tmp;
    if(*head == NULL) {
        *head = new_node;
        return;
    }
    if(*head != NULL){
        new_node->next = *head;
        *head = new_node;
        return;
    }
}

void print(Node ***l){
    Node **list = *l;
    Node *cur;
    for(int i = 0;i<SIZE;i++){
        cur = list[i];
        printf("KEY %2d: ",i);
        while(cur){
            // printf(cur->next == 0 ? "%2d" : "%2d ",cur->item);
            printf("%d ",cur->item);
            cur = cur->next;
        }
        printf("\n");
    }

}

int main(){
    char c;
    int x;
    Node **list_node = (Node **)malloc(sizeof(Node *)*SIZE);
    for(int i = 0;i<SIZE;i++){
        list_node[i] = NULL;
    }
    while(1){
        printf("input> ");
        scanf("\n%c",&c);
        if (c == 'q') break;
        if (c == 'p') print(&list_node);
        else if (c == 'a') {
            scanf("%d",&x);
            insert(&(list_node[x%SIZE]),x);
        }
    }

    return 0;
}