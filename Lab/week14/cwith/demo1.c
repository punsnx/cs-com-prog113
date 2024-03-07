#include <stdio.h>
#include <stdlib.h>


typedef struct node {
    int data;
    struct node *next;
}Node;
void append(Node **head,int data){
    Node *cur = *head;
    Node *new_node = (Node *)malloc(sizeof(Node));
    new_node->data = data;
    new_node->next = NULL;

    if(cur == NULL){
        *head = new_node;
        return;
    }
    while(cur){
        cur = cur->next;
    }
    cur = new_node;
    return;
}
void printNode(Node **head){
    Node * cur = * head;
    while(cur){
        printf("%d ",cur->data);
        cur = cur->next;
    }
}

int main(){

    Node *head = NULL;
    append(&head, 1);
    printNode(&head);

    return 0;
}