#include <stdio.h>
#include <stdlib.h>

int main(){
    char str[20];
    // get(20);
    // last \0 terminate character
    fgets(str,20, stdin);
    printf("[%s]",str);
    //atoi array to int
    int i = atoi(str);
    printf("%d",i);
    int isBool = 1;//TRUE NOT ZERO ARE TRUE

    char isExit[] = "";//TRUE
    //0,0.0,\0 is false
    return 0;
}