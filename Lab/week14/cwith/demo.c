#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    char a[] = "hello";
    int s = sizeof(a)/sizeof(a[0]); //measure size of arr incllude /0
    s = strlen(a); // this method not including /0
    printf("%d ", s);
    return 0;
}