#include <stdio.h>
#include <stdlib.h>

int main()
{
    char x[3],y[4];
    fgets(x,3,stdin);
    fgets(y,4,stdin);
    printf("[%s][%s]",x,y);
    return 0;
}