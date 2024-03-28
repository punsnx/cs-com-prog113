#include <iostream>
#include <sstream>
#include <cstdlib>
using namespace std;

//c++ realloc with zero constructor base on new operator
void *fakeReallocZ(void *ptrArr,size_t oldN,size_t newN,size_t varSize){
    if(newN < oldN){return ptrArr;}
    size_t oldSize = oldN*varSize;
    size_t newSize = newN*varSize;
    char *oldPtr = (char*)ptrArr;
    char *newPtr = new char[newSize]();//default char constructor to 0
    // int *newPtrInt = (int*)newPtr;
    for(size_t  i = 0; i<oldSize;i++)
    {
        newPtr[i] = oldPtr[i]; 
    }
    delete[] oldPtr;
    return (void *)newPtr;
}

int main(){
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

    // int *newList = (int*)realloc(list,(s+ss)*sizeof(int)); //MUST NOT USE WITH new

    //base code of realloc via new operator

    // int *newList = new int[s+ss];
    // for(int i=0;i<s+ss;i++){
    //     if(i<s){
    //         newList[i] = list[i];
    //     }else{
    //         newList[i] = i;
    //     }
    // }
    // delete[] list;



    //MUST NOT USE REALLOC WITH NEW
    
    // list = (int **)realloc(list,5*sizeof(int*));
    // for(int i = 2;i<5;i++){
    //     list[i] = new int(i+10);
    // }
    // for(int i = 0;i<5;i++){
    //     cout << *(list[i]) << " ";
    // }
    // cout << endl;


    // int a[] = {};
    // int *aa = a;
    // cout << sizeof(a) << endl;
}