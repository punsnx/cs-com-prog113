#include <stdio.h>
#include <stdlib.h>

int main() {
    char n_str[9];int n;long double pi=4;
    printf("Enter n: ");fgets(n_str,9,stdin);
    n = atoi(n_str);
    for (int i = 1; i < n; i++){
        if(i % 2 == 0){
            pi += 4.0/(2*i+1);
        }else {
            pi -= 4.0/(2*i+1);
        }
    }
    printf("%.10Lf",pi);
    return 0;
}
