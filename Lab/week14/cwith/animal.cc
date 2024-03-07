#include <iostream>
using namespace std;


class Animal{
private:
    string name;
public:
    Animal(string n): name(n){
        name = "Unknow";
    }

    string getName(){return name;}
    void setName(string name){this->name=name;}
    virtual void makeSound() = 0; //PURE Virtual for don't now in animal
};
class Dog : public Animal{
public:
    Dog(string name) : Animal(name){}
    void makeSound(){
        cout << "Hong Hong" << endl;
    }
};
class Cat : public Animal{
public:
    Cat(string name) : Animal(name){}
    void makeSound(){
        cout << "Meow Meow" << endl;
    }
};
int main(){
    Animal **dog = (dog **)new Dog[2];
    // dog->makeSound();


    return 0;
}