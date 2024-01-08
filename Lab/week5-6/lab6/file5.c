#include <stdio.h>
    #define BOARD_SIZE 8

void bishopMoves(int bx, int by) {
    int real_x,real_y,left,right;
    for (int y = 0;y < 2*BOARD_SIZE+2; y++){
        for (int x = 0; x < 2*BOARD_SIZE+2; x++){
            if (y % 2 == 0){
                if(y == 0){
                    if (x % 2 == 0 &&  x != 0){
                        printf("%d",(x-2)/2);
                    }else {
                        printf(" ");
                    }
                }else {
                    if (x % 2 == 0){
                        real_x = (x-2)/2,real_y = (y-2)/2;
                        if (real_y < y) {
                            left = bx-(by-real_y);
                            right = bx+(by-real_y);
                        } else {
                            left = bx+(by-real_y);
                            right = bx-(by-real_y);
                        }
                        left = 2 * left + 2;
                        right = 2 * right + 2;
                        if (x == 0){
                            printf("%d",(y-2)/2);
                        }else if (real_x == bx && real_y == by) {
                            printf("B");
                        }else { 
                            if (x == left || x == right){
                                printf("X");
                            }else {
                                printf(" ");
                            }
                            
                        }
                    }else {
                        printf("|");
                    }
                }
            }else {printf("-");}
        }
        printf("\n");
    }
}

int main() {
    int x,y;
    printf("Enter Bishop's X Y position: ");
    scanf("\n%d %d",&x,&y);
    // printf("x%d y%d\n",x,y);
    bishopMoves(x,y);
}
