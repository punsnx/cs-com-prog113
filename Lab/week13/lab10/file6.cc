#include <iostream>
#include <cmath>
#include <string>

using namespace std;

class Time{
private:
    int hour,minute,second;
    //optional duration time setter private func
    void setTime(int duration){
        duration %= 24*60*60;
        this->hour = duration / 3600;
        duration %= 3600;
        this->minute = duration / 60;
        this->second = duration % 60;
    }
public:
    Time(int h, int m, int s):hour(h),minute(m),second(s){
        setTime(getDuration());
    }
    Time(int duration){
        setTime(duration);
    }
    //getter 
    int getHour(){return hour;}
    int getMinute(){return minute;}
    int getSecond(){return second;}
    //setter 
    void setHour(int h)
    {   
        if(h < 0) hour = 0;
        else hour = h;
    }
    void setMinute(int m)
    {
        if(m < 0) minute = 0;
        else if (m > 60) second = 59;
        else minute = m;
    }
    void setSecond(int s)
    {
        if(s < 0) second = 0;
        else if (s > 60) second = 59;
        else second = s;
    }
    //function
    int getDuration(){
        return (hour*60*60)+(minute*60)+second;
    }
    Time add(Time other){
        int duration = getDuration() + other.getDuration();
        Time newTime(duration);
        return newTime;
    }
    int subtract(Time other){
        int deltaTime = getDuration() - other.getDuration();
        if(deltaTime >= 0) return deltaTime;
        else return (24*3600)+deltaTime;       
        // return sqrt(pow(deltaTime,2));
    }
    int equals(Time other){
        return (getDuration() == other.getDuration());
    }
    string toString(){
        int h = getHour(),m = getMinute(),s = getSecond();
        string r = "";
        r = r + to_string(h/10) + to_string(h%10) + ":" + to_string(m/10) + to_string(m%10) + ":"  + to_string(s/10) + to_string(s%10);
        return r;
    }
};

int main(){
    Time a(2,2,2),b(1,1,1),c(86400);
    cout << "( a ) -> " << a.toString() << endl;
    cout << "( b ) -> " << b.toString() << endl;
    cout << "(a) - (b) => " << a.subtract(b) << " sec." << endl;
    cout << "( a ) -> " << a.toString() << endl;
    cout << "( b ) -> " << b.toString() << endl;
    cout << "(b) - (a) => " << b.subtract(a) << " sec." << endl;
    cout << "( a ) -> " << a.toString() << endl;
    cout << "( b ) -> " << b.toString() << endl;

    cout << c.toString() << endl;
    return 0;
}