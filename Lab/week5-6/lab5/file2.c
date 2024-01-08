#include <stdio.h>
#include <stdlib.h>

int main() {
    int n,a,b,c;
    scanf("\n%d",&n);
    for (a = 1; a <= n; a++){
        for (b = 1; b<= n-a; b++){
            c = n - a - b;
            if ((a*a + b*b) == c*c){
                printf("(%d, %d, %d)",a,b,c);
                return 0;
            }
        }
    }
    printf("No triple found.");
    return 0;
}