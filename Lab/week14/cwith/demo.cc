#include <iostream>
using namespace std;
// 
class Animal {
private:
    string name;
    int age;
public:
    Animal(){}
    Animal(string n,int a):name(n),age(a){}
    string getName(){return name;}
    int getAge(){return age;}

    void eat(){
        cout << name << "is eating" << endl;
    }
    void sleep(){
        cout << name << "is sleepiing" << endl;
    }
    virtual void makeSound(){
        cout << name << "is making sound" << endl;
    }
};

class Dog : public Animal {
public:
    Dog(string n,int a): Animal(n,a){}
    void makeSound() override {
        cout << getName() << "is eater!!!!" << endl;
    }

};
int main(){
    Animal a 

    return 0;
}