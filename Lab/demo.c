#include <stdio.h>
#include <stdlib.h>

int toBinary(int n){
    int b=0,i=1;
    short int remain;
    while (n > 0){
        remain = n % 2;
        n = n >> 1;
        b += remain * i;
        i *= 10;
    }
    return b;
}

int main()
{
    char input[4];
    int n;
    fgets(input,4,stdin);
    n = atoi(input);
    printf("Binary number of %d is %04d.",n,toBinary(n));
    return 0;
}

// 0111 7
// 0011 3
// 0001 1
// 0000 0

// 0010 2
// 0001 1
// 0000 0