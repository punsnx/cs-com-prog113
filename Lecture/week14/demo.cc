#include <iostream>

class GameCharacter{

};

class Player : public GameCharacter{

};

class Enemy : public GameCharacter{

};

class Boss : public Enemy {

};


int main(){
    cout << "🤣";


    //polymorphism
    // static type
    // dynamic type
    Enemy *boss1 = new Boss();

    return 0;
}



