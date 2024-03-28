#include <iostream>
#include <cstdlib>
#include <sstream>
#include "../classLinklist.cc"
#include "../fakeRealloc.cc"

int main(){
    // Node aa;
    Linklist a,b,c;
    a.addNodeSort(5);
    a.addNodeSort(1);
    a.addNodeSort(3).addNodeSort(5);
    b.addNodeSort(1).addNodeSort(1);
    c.addNodeSort(2);
    // a.deleteNode(3).deleteNode(5);
    a.print();
    b.print();
    c.print();
    a + b + c;
    a.print();
    cout << "a[1] = " << a[1].getData() << endl;
    a.deleteNodeR(5).deleteNodeR(1);
    a.print();
    cout << "a[1] = " << a[1].getData() << endl;

    int s = 5;
    int *list = new int[s]();
    for(int i = 0;i<s;i++){
        list[i] = i+10;
    }
    for(int i = 0;i<s;i++){
        cout << list[i] << " ";
    }
    cout << endl;
    int ss = 5;
    list = (int*)fakeReallocZ(list,s,(s+ss),sizeof(int));

    for(int i = 0;i<s+ss;i++){
        cout << list[i] << " ";
    }
    cout << endl;
}