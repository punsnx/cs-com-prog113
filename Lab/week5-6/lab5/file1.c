#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int find_n_index(int n){
    short int index=0;
    while (n > 0){
        n /= 10;
        ++index;
    } return index;
}
int is_automorphic(int n){
    short int n_index;
    long long e2;
    //e2 => exponented2
    e2 = pow(n,2);
    e2 -= n;
    n_index = find_n_index(n);
    printf("n^2 = %lld\n",e2+n);
    if (e2 % (int) pow(10,n_index) == 0){
        return 1;
    }
    return 0;
} 
int main() {
    char input_str[11];
    int n;
    printf("Input n = ");
    fgets(input_str, 11, stdin);n = atoi(input_str);
    if (n == 0){return 0;}
    is_automorphic(n) ? printf("Yes. %d is automorphic number.\n",n) : printf("No. %d is not automorphic number.\n",n);
    return 0;
}