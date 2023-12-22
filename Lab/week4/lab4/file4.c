#include <stdio.h>
#include <stdlib.h>

int main()
{
    char x_str[5],y_str[5];
    int x,y,space=0;
    fgets(x_str,5,stdin);fgets(y_str,5,stdin);
    x = atoi(x_str);y = atoi(y_str);
    if (x < 4 || y < 4){return 0; }
    for(int i = 0; i < y;i++){
        if (i == 0 || i == y-1){
            if (i == y-1){
                ++space;
                for(int s = 0; s < space; s++){printf(" ");}
            }
            for(int j = 0; j < x; j++){
                printf("*");
            }
        } else {
            ++space;
            for(int s = 0; s < space; s++){printf(" ");}
            for(int k = 0; k < x;k++){
                if (k == 0 || k == x-1){
                    printf("*");
                } else {
                    printf(" ");
                }
            }
        }
        printf("\n");
    }
    return 0;
}