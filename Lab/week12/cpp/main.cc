#include <iostream>
// #include <cmath>
// #include <cstring>
// #include <cstdlib>

using namespace std;

int main(){
    // << is operator overload
    string t,tt;
    cout << "hello world" << endl;
    cout << 99.5 << endl;


    cout << "hello world" << 'A' << 99.5 << endl;

    cin >> t >> tt;
    cout << t + ' ' + tt + ' ' << (t == tt) << endl;
    cout << "size : " << t.size() << endl;
    cout << "text[1] : " << t[0] << endl;
    return 0;
}
