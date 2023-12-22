#include <stdio.h>
#include <stdlib.h>

int main()
{
    char n[5];
    fgets(n,5,stdin);
    for (int i = atoi(n);i >= 0; i--){
        printf("%d\n",i);
    }
    return 0;
}