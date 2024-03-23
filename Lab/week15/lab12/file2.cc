#include <iostream>
using namespace std;
class Transportation{
public: 
    virtual double fare() = 0;
};
class Taxi : public Transportation{
private:
    double distance;
public:
    Taxi():Transportation(),distance(0){};
    Taxi(double d):Transportation(),distance(d){}
    void setDistance(double d){
        if(d < 0) {return;}
        distance = d;
    }
    double fare() override{
        double fare = 35;
        return fare + (distance*2);
    }
};
int main()
{
    int tc;
    cin >> tc;
    if (tc == 1) {
        double distance;
        cin >> distance;
        Taxi taxi;        
        taxi.setDistance(distance);        
        cout << "Taxi fare: "<< taxi.fare() << endl;
    } else if(tc == 2) {
        double distance;
        cin >> distance;
        Taxi taxi;        
        Transportation *transport = &taxi;
        cout << "Transporataion fare: "<< transport->fare() << endl;
    }
}