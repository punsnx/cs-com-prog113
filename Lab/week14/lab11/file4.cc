#include <iostream>
using namespace std;

class Animal
{
protected:
    int happiness;
    int energy;
    int fullness;
    const int MAX_HAPPINESS = 100;
    const int MAX_ENERGY = 100;
    const int MAX_FULLNESS = 100;
    void limitStat();
public:
    Animal(int, int, int);
    int getHappiness();
    int getEnergy();
    int getFullness();
    void eat(int);
    void play(int);
    void sleep(int);
};
class Bird : public Animal
{
public:
    Bird(int, int, int);
    void fly(int);
    void sing();
};


Animal::Animal(int h, int e, int f)
: happiness(h),energy(e),fullness(f)
{
    limitStat();
}
void limit(int * p,int MAX)
{
    if(*p > MAX) *p = MAX;
    if(*p < 0) *p = 0;
}
void Animal::limitStat()
{
    limit(&happiness,MAX_HAPPINESS);
    limit(&energy,MAX_ENERGY);
    limit(&fullness,MAX_FULLNESS);
}
int Animal::getHappiness(){return happiness;}
int Animal::getEnergy(){return energy;}
int Animal::getFullness(){return fullness;}
void Animal::eat(int food){
    if(food < 0) return;
    // limit(&food,MAX_FULLNESS);
    fullness += food;
    if(fullness > MAX_FULLNESS) happiness -= 10;
    limitStat();
}
void Animal::play(int hour)
{
    if(hour < 0|| energy == 0 || fullness == 0) return;
    energy -= hour*10;
    fullness -= hour*20;
    happiness += hour*5;
    limitStat();
}
void Animal::sleep(int hour){
    if(hour < 0) return;
    energy += hour*10;
    fullness -= hour*10;
    limitStat();
}

Bird::Bird(int h, int e, int f)
: Animal(h,e,f){}

void Bird::fly(int hour)
{
    if(hour < 0) return;
    energy -= hour*5;
    limitStat();

}
void Bird::sing()
{
    happiness += 5;
    limitStat();
}
int main()
{   
    int h,e,f;
    cin >> h >> e >> f;
    Animal a(h,e,f);
    cout << a.getHappiness() << " " << a.getEnergy() << " " << a.getFullness() << endl;
}