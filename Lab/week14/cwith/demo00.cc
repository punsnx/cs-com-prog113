#include <iostream>
using namespace std;

class Pet{
private:
    string name;
    int age;
    string type;
public:
    Pet(){}
    Pet(string n,int a,string t):name(n),age(a),type(t){}

    string getName(){return name;}
    int getAge(){return age;}
    string getType(){return type;}
};
class Person{
private:
    string name;
    int age;
    Pet *pet;
public:
    Person(){}
    Person(string n,int a):name(n),age(a),pet(NULL){}

    string getName(){return name;}
    int getAge(){return age;}
    Pet *getPet(){return pet;}
    void setPet(Pet *p){
        pet = p;
    }
};
int main(){
    Person p("Charkrit",99);
    Pet pet1("deep",89,"dog");
    p.setPet(&pet1);

    cout << p.getPet()->getName() << endl;


    return 0;
}