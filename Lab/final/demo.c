
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
    number A;
    A.a = 65;
    demo B = {1, 0};
    printf("%lu", sizeof(B));
}