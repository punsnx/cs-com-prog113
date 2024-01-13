#include <stdio.h>

// int main() {
//   char ch;
//   printf("input : ");
//   ch = getchar();
//   printf("your input is : %c\n",ch);
  

//   return 0;
// }
int (*f1)();
int *(*f2)();
int main(){
    int d[] = {1, 2, 3, 4};
    int *p = d;
    // for (p=d; *p != 6; p = d + (++p - d) % 4)
    // *p = *p * 2;
    // printf("%d %d %d %d", d[0], d[1], d[2], d[3]);
    for (int i =0;i<4;i++){
        printf("%p ",&d[i]);
    }
    printf("\n");
    p = &d[3];
    printf("p%p p%d\n",p,(++p-d)%4);

    printf("%d %d %d",sizeof(f1),sizeof(f2),sizeof(printf));
}   