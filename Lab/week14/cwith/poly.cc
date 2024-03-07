// PURE Virtual
// Virtual
// class Example{
//     virtual void function() = 0;
// };

#include <iostream>
using namespace std;

class Super{
private:
public:
    virtual void print() = 0;
};

class Sub : public Super{
private:
public:
    void print(){
        cout << "Sub" << endl;
    }
    void foo(){

    }
};
int main(){
    Super *s = new Sub();
    s->print();
    // s->foo();
    
    return 0;
}

