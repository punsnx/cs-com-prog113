#include <iostream>
#include <sstream>
#include <cstdlib>
#include <cstring>
using namespace std;


int main(){
    stringstream ss;
    char str[100];
    snprintf(str,6,"%05d",10);
    ss << str;
    cout << ss.str() << endl;

    return 0;
}