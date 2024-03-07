#include <iostream>
using namespace std;

int inArray(int n,int *arr,int s){
    for(int i = 0;i<s;i++){
        if (arr[i] == n) return 0;
    }
    return 1;

}
int main() {
    int np,i,max = INT8_MIN;
    cin >> np;
    int poisoner[np],o=0,e=0;
    for(int tmp,i=0;i<np;i++){
        cin >> tmp;
        if (tmp > max) max = tmp;
        if (tmp %2 == 0) ++e;
        if (tmp %2 != 0) ++o;
        // printf("t%d o%d e%d\n",tmp,o,e);
        poisoner[i] = tmp;
    }
    int odd,even;
    // cout << endl << np << endl;

    odd = max/2.0 + 0.5;
    even = max/2.0;
    odd -= o;
    even -= e;
    // cout << odd << " " <<  even << endl;
    o = 0;
    for(i=1;i<max;i++){
        if (i%2 != 0 && inArray(i,poisoner,np)){
            cout << i;
            if (++o < odd) cout << " ";
            else cout << endl; 
        }
    }
    e = 0;
    for(i=1;i<max;i++){
        if (i%2 == 0 && inArray(i,poisoner,np)){
            cout << i ;
            if (++e < even) cout << " ";
            else cout << endl; 
        }
    }
    return 0;
}