#include <stdio.h>
int main() {
    int x,y;
    x = 3;
    y = 0;
    for (; x!= 0; x >>= 1)
        y += x & 1;
    printf("%d",y);
    return 0;
}

//quiz3 
//x 3 0011
//y += 0011 & 0001 = 0001 (1)
//x 1 0001
//y += 0001 & 0001 = 0010 (2)
//x 0000 final
//END y = 2