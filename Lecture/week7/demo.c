#include <stdio.h>

int main() {
    int x[20] = {1,2,3,4,5,6};
    int *y;

    for (y=x;*y;y++){
        putchar('*');
    }
}