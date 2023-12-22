#include <stdio.h>
#include <stdlib.h>

int main()
{
    char n_str[4];
    int N,size,locate = 0,w = 0,left,right,code;
    fgets(n_str,4,stdin);
    N = atoi(n_str);
    if (N < 1 || N > 26){
        printf("-");
        return 0;
    }
    size = 4*N-3;
    //0-2N-2
    for (int r = 0;r < 2*N-1; r++){
        code = 'a' + N; 
        if (r == N){
            w = 2;
        } else if (r > N){
            w += 2;
        }
        
        locate = (r - w) * 4 + 1;
        // printf("r%d n%d locate%d",r,N,locate);
        
        //0-4N-4
        left = (size-locate)/2;
        right = left+locate;

        for (int c = 0; c < 4*N-3; c++){

            if (c < left){
                printf("-");
            } else if (c < right){
                if (c % 2 == 0){
                    if (c < 2*N-1){
                        --code;
                    } else {
                        ++code;
                    }
                    printf("%c",code);
                } else {
                    printf("-");
                }
                // printf("%d",c);
            } else {
                printf("-");
            }
            
        }

        printf("\n");
    } 
    return 0;
}