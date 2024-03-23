#include <iostream>
using namespace std;

class Transportation
{
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

class BmtaBus: public Transportation{
public:
    double fare() override{
        return 6.5;
    }
};

class BTS : public Transportation{
private:
    int n_station;
public:
    BTS():Transportation(),n_station(0){};
    BTS(int n):Transportation(),n_station(n){}
    void setStation(int n){
        if(n < 0) {return;}
        n_station = n;
    }
    double fare() override{
        return 15 + (n_station*5);
    }
};

class Passenger{
private:
    double totalFare;
public:
    Passenger(): totalFare(0){}
    double getTotalFare(){return totalFare;}
    void addTransportation(Transportation &method)
    {
        totalFare += method.fare();
    }
};

int main()
{
    Passenger passenger;
    while(1) {
        char transportType;
        cin >> transportType;
        if (transportType == 'A') {
            Taxi *taxi = new Taxi();
            double distance;
            cin >> distance;

            taxi->setDistance(distance);
            passenger.addTransportation(*taxi);
            delete taxi;
            
        } else if (transportType == 'B') {
            BmtaBus *bus = new BmtaBus();

            passenger.addTransportation(*bus);
            delete bus;
            
        } else if (transportType == 'C') {
            BTS *bts = new BTS();
            int station;
            cin >> station;

            bts->setStation(station);
            passenger.addTransportation(*bts);
            delete bts;
            
        } else {
            break;
        }
    }
    cout << "Total Fare: " << passenger.getTotalFare() << endl;
}
