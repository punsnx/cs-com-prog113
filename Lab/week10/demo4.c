#include <stdio.h>
#include <string.h>

int main() {
    char str1[]="helloworld";
    char str2[]="x";
    char *c = strstr(str1,str2);
    printf("%p",c);
    printf("%.1f",0);
    return 0;
}