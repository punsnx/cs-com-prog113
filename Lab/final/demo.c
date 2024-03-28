
#include "stdio.h"

typedef union _number
{
    int a;
    double b;
    char c;
} number;

typedef struct _demo
{
    unsigned int a : 32;
    char b : 1;

} demo;

int main()
{

    // number A;
    // A.a = 65;
    // demo B = {1, 0};
    // printf("%lu", sizeof(B));

    char str[5];
    sprintf(str,"%04d",10);
    int n = 11;
    for(int i = 0;i<n;i++){
        printf("%d ",(int)str[i]);
    }
    printf("\n");
    for(int i = 0;i<n;i++){
        printf("%2c ",str[i]);
    }
    printf("\n");
    printf("%s",str);
}