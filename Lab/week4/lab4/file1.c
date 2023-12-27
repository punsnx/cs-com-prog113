#include <stdio.h>
#include <stdlib.h>

int toBinary(n){
    char binary[4];
    int shifted_n;
    short int remain;
    for(int i = 3;i>=0;i--){
        shifted_n = n >> 1;
        remain = shifted_n % 2;
        binary[i] = remain;
    }
    return binary;
}

int main()
{
    char input[10];
    int n;
    fgets(input,10,stdin);
    n = atoi(input);
    printf("Binary of %d is %s",n,toBinary(n)); 
    return 0;
}