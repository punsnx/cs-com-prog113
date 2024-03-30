#include <iostream>
using namespace std;

class Expense{
protected:
    int date,month,year;
    double amount;
    const int daysOfMonth[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int isLeapYear(int year) {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {return 1;} 
        else {return 0;}
    }
    double limit(double x, double min,double max){
        if(x < min){return min;}
        if(x > max){return max;}
        return x;
    }
public:
    Expense(int d,int m,int y,double a){
        int leap = (m == 2) ? isLeapYear(year) : 0;
        year=limit(y,1,INFINITY);
        month=limit(m,1,12);
        date=limit(d,1,daysOfMonth[month-1]+leap);
        amount = a;
    }
    virtual double dailyExpense(int d,int m, int y){
        if (d == date && m == month && y == year){
            return amount;
        }
        return 0;
    }
    virtual double monthlyExpense(int m, int y){
        if (m == month && y == year){
            return amount;
        }
        return 0;
    }
};
class InstallmentExpense: public Expense{
private: 
    int n_month;
    int inRange(int m,int y){
        int finalMonth = ((month+n_month-1)%12 == 0) ?  12 : (month+n_month-1)%12;
        int finalYear = year+((month+n_month-1)/12);
        if(y >= year && y <= finalYear){
            if((y == year && m >= month && m <= finalMonth) 
            || (y > year && y < finalYear) 
            || (y == finalYear && y == year && m >= month && m <= finalMonth)
            || (y == finalYear && y != year && m <= finalMonth)
            )
            {
                cout << month << " " <<  m << " " << finalMonth << endl;
                cout << year << " " <<  y << " " << finalYear << endl;
                return 1;
            }
        }
        return 0;
    }
public:
    InstallmentExpense(int d,int m,int y, double a,int n): Expense(d,m,y,a){
        n_month = limit(n,0,INFINITY);
    }
    double dailyExpense (int d,int m, int y) override{
        if (inRange(m,y)){
            int leap = (m == 2) ? isLeapYear(year) : 0;
            int days = daysOfMonth[m-1]+leap;
            return (amount/(double)n_month)/(double)days;
        }
        return 0;
    }
    double monthlyExpense(int m, int y) override {
        if (inRange(m,y)){
            return amount/(double)n_month;
        }
        return 0;
    }

};

class ExpenseAccount{
private:
    Expense **listEp;
    int totalEp;
public:
    ExpenseAccount(){
        totalEp = 0;
        listEp = new Expense*[100];
    }
    void addExpense(Expense *e){
        if(totalEp >= 100){return;}
        listEp[totalEp++] = e;
    }
    double getTotalDailyExpense(int d,int m,int y){
        double total = 0;
        for(int i = 0;i<totalEp;i++){
            total += listEp[i]->dailyExpense(d,m,y);
        }
        return total;
    }
    double getTotalMonthlyExpense(int m,int y){
        double total = 0;
        for(int i = 0;i<totalEp;i++){
            total += listEp[i]->monthlyExpense(m,y);
        }
        return total;
    }
    
};

int main() {
    Expense *e1 = new InstallmentExpense(20,2,2024,31000,10);
    double daily = e1->dailyExpense(20,3,2024);
    double monthly = e1->monthlyExpense(12,2024);
    cout << daily << " " << monthly << endl;
}