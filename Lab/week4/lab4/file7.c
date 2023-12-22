#include <stdio.h>
#include <stdlib.h>

int main()
{
    char n_str[5];int N,count;
    fgets(n_str,5,stdin);
    N = atoi(n_str);
    count = 0;
    for(int i = 0; i < 2*N-1;i++ ){
        if (i < N){++count; } else {--count;}
        for(int j = 1;j<=count;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}