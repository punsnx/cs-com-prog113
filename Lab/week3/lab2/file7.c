#include <stdio.h>
#include <stdlib.h>

int main()
{
    char x_str[5], y_str[5];

    printf("Enter the x coordinate: ");
    fgets(x_str, 5, stdin);
    printf("Enter the y coordinate: ");
    fgets(y_str, 5, stdin);

    int x = atoi(x_str);
    int y = atoi(y_str);
        if (x == 0 && y == 0){
        printf("Center");
    }else if (y == 0){
        if (x > 0){
            printf("East");
        } else if (x < 0){
            printf("West");
        } 
    } else if (y > 0){
        printf("North");
        if (x > 0){
            printf("-east");
        } else if (x < 0){
            printf("-west");
        }
    } else if (y < 0){
        printf("South");
        if (x > 0){
            printf("-east");
        } else if (x < 0){
            printf("-west");
        }
    } 
