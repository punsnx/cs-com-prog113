#include <stdio.h>
#include <stdlib.h>

int main()
{
    char N_str[4];
    int N,index,code;
    fgets(N_str,4,stdin);N = atoi(N_str);
    if (N < 1 || N > 26){
        printf("-");
    } else {
        index = 4*N-2;
        code = 'a' + N;
        for(int i = 0;i<index-1;i++){
            if (i % 2 != 0){
                printf("%c",45);
            }else {
                if (i <= 2*N-2){
                    printf("%c",--code);
                } else {
                    printf("%c",++code);
                }
            }
        }
    }

    return 0;
}

// int main() {
//     char N_str[4];
//     fgets(N_str,4,stdin);
//     int N = atoi(N_str),code;
//     code = 'a' + N; 
//     if (N < 1 || N > 26){
//         printf("-");
//     } else if (N == 1){
//         printf("a");
//     } else {
//         for(int i = 0,j=N;i < 2*N-1;i++){
//             if (j > 0){
//                 printf("%c-",--code);
//             } else {
//                 if (i == 2*N-2){
//                     printf("%c",++code);
//                 } else {
//                     printf("%c-",++code);
//                 }
//             }
//             --j;
//         }
//     }
//     return 0;
// }