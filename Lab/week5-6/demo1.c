#include <stdio.h>
int main() {
    int a[10];
    int *a_ptr = a;
    unsigned long long i=0;
    while(1){
        printf("[%p] data[%d] = %d\n",a_ptr, i++, *(a_ptr + i));
    }
    return 0;
}

