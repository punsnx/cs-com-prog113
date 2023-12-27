#include <stdio.h>
unsigned char zero(int d){
    int c;
    if ((c = getchar()) == EOF){
        printf("EOF c%d d%d\n",c,d);
        return d;
    } else {
        printf("N c%d (d%d + %d + %d) = %d\n",c,d,(c >= '0' && c <= '9'),(c == '0'),d + (c >= '0' && c <= '9') + (c == '0'));
        //0=45,9=57
        return zero(d + (c >= '0' && c <= '9') + (c == '0'));
    }
}
int main() {
    printf("%d",zero(0));
    return 0;
}