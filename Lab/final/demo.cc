#include <iostream>
#include <cstdlib>
using namespace std;

class Person {
private:
    string name;
public:
    Person(string n):name(n){}
    string getName(){return name;}
};

int main() {
    int n = 10;
    Person **people = (Person**)malloc(sizeof(Person*)*10);
    for(int i = 0; i<n;i++){
        people[i] = new Person("HELLO");
        cout << people[i]->getName() << endl;
    }
    return 0;
}


