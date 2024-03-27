#include <iostream>
#include <sstream>
#include <cstdlib>
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


};



int main(){
    Node aa;
    Linklist a(&aa);
    a.addNode(0).addNode(1);
    a.print();

}