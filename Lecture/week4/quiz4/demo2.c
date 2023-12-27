#include <stdio.h>

int main() {
    
    if (NULL == EOF){printf("EOF");} 
    else if (NULL == '\0'){printf("\\0");} 
    else if (NULL == 1){printf("1");} 
    else if (NULL == -1){printf("-1");} 
    else if (NULL == 0){printf("0");} 

    return 0;
}