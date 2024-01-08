#include <stdio.h>
#define BOARD_SIZE 8

void setPieceOnTable(int board[][BOARD_SIZE], char piece, int xPos, int yPos);

int main() {
    int n;
    scanf("\n%d",&n);
    char p;
    int input_x,input_y,real_x,board[BOARD_SIZE][BOARD_SIZE]={0};
    for (int i = 0; i < n; i++){
        scanf("\n%c(%d, %d)",&p,&input_x,&input_y);
        setPieceOnTable(board,p,input_x,input_y);
    }
    printf("------------------\n");
    for (int y = -1 ; y < BOARD_SIZE; y++){
        for (int x = 0; x < 2*BOARD_SIZE+2; x++){
            if (y == -1){
                if (x != 0 && x % 2 ==0){
                    printf("%d",(x-2)/2);
                }else {
                    printf(" ");
                }
            }else {
                real_x = (x-2)/2;
                if (x == 0){
                    printf("%d",y);
                } else if (x % 2 == 0){
                    if (board[y][real_x] != 0){
                        printf("%c",(char)board[y][real_x]);
                    } else printf(" ");
                } else {
                    printf("|");
                }
            }
        }
        printf("\n");
    }
}

void setPieceOnTable(int board[][BOARD_SIZE], char piece, int xPos, int yPos )
{
    board[yPos][xPos] = piece;
}