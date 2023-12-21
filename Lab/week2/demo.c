#include <stdio.h>
int a; 
// global var initial value is 0

int main() {
    // local var no initial value
    int a = 100;
    long b = 1000;
    long long c = 10000;
    unsigned long long d = 10000;
    char e = 'a'; //97 ascii 1 byte

    float f = 0.12; // 4 byte
    double g = 0.1234; // 8 byte

    printf("Hello, world\n");
    printf("%d %ld %c\n%f %lf\n",a,b,e,f,g);

    float q = 1.0/10;
    printf("%f",q);

}