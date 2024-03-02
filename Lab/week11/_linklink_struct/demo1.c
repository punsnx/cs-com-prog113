#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node * next;
} Node;

int main() {
    int i,n = 5;
    Node *head,*new_node,*cur;
    for (i=0;i<n;i++){
        new_node = (Node *)malloc(sizeof(Node));
        new_node->data = i;
        new_node->next = 0;
        if (i == 0){
            head = cur = new_node;
        }
        cur->next = new_node;
        cur = new_node;
    }
    return 0;
}