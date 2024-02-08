#include <stdio.h>

int main() {
    int a[10] = {0, 1}, *ptr;
    int  k;
    ptr  =  a+2;
    for(k=2; k<10; k++){
        a[k] = a[k-1]+a[k-2];
    }
    printf("%d",ptr+3);
}