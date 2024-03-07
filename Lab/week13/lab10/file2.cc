
#include <iostream>
#include <string>
using namespace std;

class Hero{
private:
    string name;
    int level;
public:

    Hero(string name,int level){
        this->name = name;
        this->level = level;
    }
    string getName(){
        return name;
    }
    int getLevel(){
        return level;
    }

};


int main()
{
    string s;int n;
    cin >> s >> n;
    Hero hero(s,n);
    cout << hero.getName() << " " << hero.getLevel() << endl;
    
}