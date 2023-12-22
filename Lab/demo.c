#include <stdio.h>
#include <stdlib.h>

int main()
{   int n = 5,j=1,a,r,b=0;
    for(int i = 1; i <= 4; i++){
        a = n;
        a = a >> 1;
        r = (n - a) % 2;
        n = a;
        b = b + j * r;
        j *= 10;
    }
    printf("%d",b);
    return 0;
}