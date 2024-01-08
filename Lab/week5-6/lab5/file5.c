#include <stdio.h>
#include <stdlib.h>

int main() {
    char n_str[6];short int n, size=0;
    printf("Enter n: ");fgets(n_str,6,stdin);
    n = atoi(n_str);
    for (int i = 0; i < 2 * n - 1; i++ ){
        (i < n) ? ++size : --size;
        for(int j = 0; j < size; j++){
            (j % 2 == 0) ? printf("-") : printf("x");
        }
        printf("\n");
    }
    return 0;
}
