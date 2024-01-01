#include <stdio.h>
#include <stdlib.h>

static int x = 1000;

void func() {
    static int x = 0;
    x += 100;
    printf("src1_func static int x %d\n",x);
}
int main(){
    func();
    func();
    printf("src1_main static int x %d\n",x);
    func();
} 