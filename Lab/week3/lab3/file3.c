#include <stdio.h>
#include <stdlib.h>

int main(){
    char a[7],b[7];
    int M,N,p,q,GCD;
    fgets(a,7,stdin);fgets(b,7,stdin);
    M = atoll(a);N = atoll(b);
    while (M != N){
    if (M > N){
        M = M - N;
    } else {
        N = N - M;
    }
    }
    GCD = M;
    p = atoi(a);q = atoi(b);
    p /= GCD;q /= GCD;
    if (q==1){
        printf("= %d",p);
        return 0;
    }
    printf("= %d/%d",p,q);
    return 0;
}