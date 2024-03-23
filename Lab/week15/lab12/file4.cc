#include <iostream>
using namespace std;
class Transportation{
public: 
    virtual double fare() = 0;
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
int main()
{
    int tc;
    cin >> tc;
    if (tc == 1) {
        int station;
        cin >> station;
        BTS bts;        
        bts.setStation(station);        
        cout << "BTS fare: "<< bts.fare() << endl;
    } else if(tc == 2) {
        int station;
        cin >> station;
        BTS bts;        
        bts.setStation(station);
        Transportation *transport = &bts;
        cout << "Transporataion fare: "<< transport->fare() << endl;
    }
}