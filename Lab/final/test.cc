#include <iostream>
#include <sstream>
#include <cstdlib>
using namespace std;

class Linklist{
};



int main(){

    int **list = new int*[2];
    for(int i = 0;i<2;i++){
        list[i] = new int(i+1);
    }
    for(int i = 0;i<2;i++){
        cout << *(list[i]) << " ";
    }
    cout << endl;
    list = (int **)realloc(list,5*sizeof(int*));
    for(int i = 2;i<5;i++){
        list[i] = new int(i+10);
    }
    for(int i = 0;i<5;i++){
        cout << *(list[i]) << " ";
    }
    cout << endl;
    int a[] = {};
    int *aa = a;
    cout << sizeof(a) << endl;
}