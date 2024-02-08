#include <stdio.h>

int main() {
    int i, j=12;
    int *pi, *pj=&j; //pj = FF00
    *pj = j+3; //j = 15
    i = *pj+7; // i = 22
    pi = pj; //pi = FF00
    *pi = i+j; 
    //i = 22,j = 37, pi = pj = FF00

    return 0;
}