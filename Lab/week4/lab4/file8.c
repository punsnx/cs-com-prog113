#include <stdio.h>
#include <stdlib.h>

// int toBinary(int n){
//     int binary=0,remain,i = 1;
//     while (n > 0){
//         remain = n % 2;
//         n = n / 2;
//         binary = binary + (remain * i);
//         i *= 10;
//     }
//     return binary;
// }

long long toBinary(int n ,long long i){
    long long binary = 0;short int remain;
    if (n <= 0){
        return 0;
    } else {
        remain = n % 2;
        n = n / 2;
        binary += remain * i;
        return binary + toBinary(n, i*10);
    }
}
int main()
{
    char input[12];
    int n;fgets(input,12,stdin);
    n = atoi(input);
    printf("%lld",toBinary(n,1)); 
    return 0;
}