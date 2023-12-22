#include <stdio.h>
#include <stdlib.h>

int toBinary(int n){
    int binary=0,remain,i = 1;
    while (n > 0){
        remain = n % 2;
        n = n / 2;
        binary = binary + (remain * i);
        i *= 10;
    }
    return binary;
}
int main()
{
    char input[10];
    int n,binary;
    fgets(input,10,stdin);
    n = atoi(input);
    printf("Binary of %d is %04d",n,toBinary(n)); 
    return 0;
}