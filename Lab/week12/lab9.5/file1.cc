#include <iostream>
using namespace std;

int main() {
    int n,c=0;
    cin >> n;
    while (n>0){
        if(n%2 == 0){
            n /= 2;
        }else {
            n -= 1;
        }
        c++;
    }
    cout << c << endl;
}