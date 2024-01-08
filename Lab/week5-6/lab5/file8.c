// #include <stdio.h>
// #include <stdlib.h>

// int getCommand(void){
//     int c;
//     printf("Input step command: ");scanf("%d",&c);
//     if (c != 0){
//         return c;
//     }
//     return 0;
// }
// int main() {
//     int n,width=5,c,round=0;
//     printf("Input number of stairs: ");scanf("%d",&n);
//     char stairs[n][width];
//     int default_top=n-2,default_bottom=n-1;
//     int cur_top=default_top,cur_bottom=default_bottom;
//     do{
//         printf("---- round %d ----\n",++round);
//         if (round > 1){
//             cur_top -= c;
//             cur_bottom -=c;
//             if(cur_top>default_top){
//                 cur_top = default_top;
//             }else if (cur_top < 0){
//                 cur_top = 0;
//             }
//            if(cur_bottom>default_bottom){
//                 cur_bottom = default_bottom;
//             }else if (cur_bottom < 1){
//                 cur_bottom = 1;
//             }
//         }
//         for (int i = 0;i<n;i++){
//             for(int j = 0; j<width;j++){
//                 if (j==0 || j==width-1){
//                     printf("|");
//                 }else if(j==(int)(width/2 + 0.5)){
//                     if (i == cur_bottom){
//                         printf("∧");
//                     }else if (i == cur_top){
//                         printf("o");
//                     }else {
//                         printf("-");
//                     }
//                 }else{
//                     printf("-");
//                 }
//             }
//             printf("\n");
//         }

//     }while((c=getCommand())!=0 && c != EOF);
//     return 0;
// }
#include <stdio.h>
#include <stdlib.h>

int getCommand(){
    char c_str[9];int c;
    printf("Input step command: ");fgets(c_str,9,stdin);
    c = atoi(c_str);
    return c;
}

int main() {
    char n_str[9];int n,w=5,c,round=0;
    printf("Input number of stairs: ");
    fgets(n_str,9,stdin);n = atoi(n_str);
    int human_top=n-2,human_bottom=n-1; 
    do{
        printf("---- round %d ----\n",++round);
        if (round > 1){
            human_top -= c;human_bottom -= c;
            if (human_top > n-2){human_top = n-2;}
            else if (human_top < 0){human_top = 0;}
            if (human_bottom > n-1){human_bottom = n-1;}
            else if (human_bottom < 1){human_bottom = 1;}
        }
        for(int i = 0; i < n;i++){
            for(int j = 0; j < w;j++){
                if (j == 0 || j == w-1){
                    printf("|");
                }else if (j == (int)(w/2+0.5)){
                    if(i == human_top){
                        printf("O");
                    }else if (i == human_bottom){
                        printf("^");
                    } else {
                        printf("-");
                    }
                }else {
                    printf("-");
                }
            }
            printf("\n");
        }
    }while((c=getCommand()));
    
    return 0;
}
