#include <iostream>
#include <sstream>
#include <cstdlib>
using namespace std;

typedef struct _node{
    int data;
    _node *next;
}node;

void addNode(node **head,int data){//add stack method
    node *cur=*head,*prev=NULL;
    node *newNode = (node*)malloc(sizeof(node));
    newNode->data = data;
    newNode->next = NULL;
    if(cur == NULL){
        *head = newNode;
        return;
    }
    while(cur){
        prev = cur;
        cur = cur->next;
    }
    prev->next = newNode;
}
void addNodeSort(node **head,int data){//add stack method
    node *cur=*head,*prev=NULL;
    node *newNode = (node*)malloc(sizeof(node));
    newNode->data = data;
    newNode->next = NULL;
    if(cur == NULL){
        *head = newNode;
        return;
    }
    while(cur && cur->data <= data){
        prev = cur;
        cur = cur->next;
    }
    if(prev == NULL){
        newNode->next = cur;
        *head = newNode;
        return;
    }
    newNode->next = cur;
    prev->next = newNode;
}
void deleteNode(node **head,int data){
    node *cur=*head,*prev=NULL;
    while(cur && cur->data != data){
        prev = cur;
        cur = cur->next;
    }
    if(cur == NULL){return;}
    if(prev == NULL && cur){
        *head = cur->next;
        free(cur);
        return;
    }
    prev->next = cur->next;
    free(cur);
}
void deleteNodeR(node **head,int data){
    node *cur=*head,*prev=NULL;
    while(cur && prev == NULL && cur->data == data){
        *head = cur->next;
        free(cur);
        cur = *head;
    }
    while(cur){
        if(cur->data == data){
            prev->next = cur->next;
            free(cur);
            cur = prev->next;
        }else{
            prev = cur;
            cur = cur->next;
        }
    }
    return;//NULL
}
void printNode(node **head){
    node *cur=*head;
    stringstream ss;
    ss << "[";
    while(cur){
        ss << cur->data << " ";
        cur = cur->next;
    }
    ss << (char)8 << "]";
    cout << ss.str() << endl;
}

int main(){
    node *head=NULL;
    addNodeSort(&head, 1);
    addNodeSort(&head, 1);
    addNodeSort(&head, 1);
    addNodeSort(&head, 1);

    // deleteNodeR(&head,1);

    printNode(&head);


}