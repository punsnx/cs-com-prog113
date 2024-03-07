#include <iostream>
using namespace std;

int main() {
    string name;
    double salary,total=0;
    int i,n;
    cin >> name;
    cin >> salary;
    total = salary * 12;
    for(i = 0;i<12;i++){
        cin >> salary;
        total += salary * 0.15;
    }
    n = total;i=0;
    while(n>0){
        n /= 10;
        i++;
    }
    char output[name.size() + i + 5];
    sprintf(output,"%s %.2f",name.c_str(),total);
    cout << output;
}