#include <iostream>
#include <sstream>
#include <cstdlib>
#include <memory>
using namespace std;

class Node {
private:
    int data;
    Node* next;
public:
    Node():data(0),next(NULL){}
    Node(int d):data(d),next(NULL){}
    Node(int d,Node *n):data(d),next(n){}
    
    int getData(){return data;}
    Node* getNext(){return next;}

    void setData(int d){
        data = d;
    }
    void setNext(Node *n){
        next = n;
    }
};
class Linklist{
private:
    Node *head;
public:
    Linklist():head(NULL){}
    Linklist(Node *ref):head(ref){}
    ~Linklist(){
        Node *cur=head,*prev=NULL;
        while(cur){
            prev = cur;
            cur = cur->getNext();
            delete prev;
        }
    }
    Linklist &addNode(int data){
        Node *cur = head;
        Node *new_node = new Node(data,NULL);
        if (cur == NULL){
            head = new_node;
            return *this;
        }
        while(cur && cur->getNext() != NULL){
            cur = cur->getNext();
        }
        cur->setNext(new_node);
        return *this;
    }
    Linklist &addNodeSort(int data){
        Node *cur = head,*prev=NULL;
        Node *new_node = new Node(data,NULL);
        if(cur == NULL){
            head = new_node;
            return *this;
        }
        while(cur && cur->getData() <= data){
            prev = cur;
            cur = cur->getNext();
        }
        if(prev == NULL){
            new_node->setNext(head);
            head = new_node;
            return *this;
        }
        new_node->setNext(cur);
        prev->setNext(new_node);
        return *this;
    }
    Linklist &deleteNode(int data){
        Node *cur=head,*prev=NULL;
        while(cur && cur->getData() != data){
            prev = cur;
            cur = cur->getNext();
        }
        if(cur == NULL){return *this;}
        if(prev == NULL){
            head = cur->getNext();
            delete(cur);
            return *this;
        }
        prev->setNext(cur->getNext());
        delete(cur);
        return *this;
    }
    Linklist &deleteNodeR(int data){
        Node *cur = head,*prev=NULL;
        while(cur && cur->getData() == data){
            head = cur->getNext();
            delete(cur);
            cur = head;
        }
        while(cur){
            if(cur->getData() == data){
                prev->setNext(cur->getNext());
                delete(cur);
                cur = prev->getNext();
            }else{                
                prev = cur;
                cur = cur->getNext();
            }
        }
        return *this;
    }
    Linklist &sort(){//SELECTION SORT
        Node *cur=head,*swapPos,*checkPos,*tmp = new Node;
        while(cur){//CHECK AND SWAP TO WALL
            swapPos=checkPos=cur;
            while(checkPos){//CHECK EACH UNTIL NULL
                if(swapPos->getData() > checkPos->getData()){
                    swapPos=checkPos;
                }
                checkPos=checkPos->getNext();
            }
            //SWAP PROCESS
            *tmp = *cur;
            *cur = *swapPos;
            cur->setNext(tmp->getNext());
            tmp->setNext(swapPos->getNext());
            *swapPos = *tmp;
            //INCREMENT NEXT
            cur = cur->getNext();
        }
        delete tmp;
        return *this;
    }
    void print(){
        Node *cur = head;
        stringstream ss;
        ss << "[ ";
        while(cur){
            ss << cur->getData() << " ";
            cur = cur->getNext();
        }
        ss << "]";
        cout << ss.str() << endl;
    }
    Node &operator[](int n){
        Node *cur = head;
        for(int i = 0;i<n;i++){
            cur = cur->getNext();
        }
        return *cur;
    }
    Linklist &operator+(Linklist &list2){
        Node * cur = head;
        if (cur == NULL){
            head = &list2[0];
            return *this;
        }
        while(cur->getNext() != NULL){
            cur = cur->getNext();
        }
        cur->setNext(&list2[0]);
        return *this;
    }
};
int main(){
    // Node aa;
    Linklist 
    *a = new Linklist(),
    *b = new Linklist(),
    *c = new Linklist();

    a->addNodeSort(5);
    a->addNodeSort(1);
    a->addNodeSort(3).addNodeSort(5);
    b->addNodeSort(1).addNodeSort(1);
    c->addNodeSort(2);
    // a.deleteNode(3).deleteNode(5);
    a->print();
    b->print();
    c->print();
    *a + *b + *c;
    a->print();
    cout << "a[1] = " << (*a)[1].getData() << endl;
    a->deleteNodeR(5).deleteNodeR(1);
    a->print();
    cout << "a[1] = " << (*a)[1].getData() << endl;
    (*a)[1].setData(20);
    cout << "a[1] = " << (*a)[1].getData() << endl;
    a->sort();
    a->print();

    delete a;
}