#include <stdio.h>

int main (){
    // int x=3,y = 0;
    // for (; x != 0; x >>= 1)
    //     y += x & 1;
    // printf("%d",y);

    // int n;
    // for (n=8; n != 0; n--)
    //     printf("%d, ", n--);
    // int i =0;
    // while (i < 12) {
    //     i++;
    //     printf("12 x %d = %d\n", i, 1*12);
    // }

    // int input;
    // int a, e, i, o, u, newline, other;
    // a = e= i = o = u = newline = other = 0;
    // while ((input=getchar ()) != '\n') {
    //     printf("%c\n",input);
    //     switch (input) {
    //         case 'a': 
    //         case 'A': a++; break;
    //         case 'e':
    //         case 'E': e++; break;
    //         case 'i':
    //         case 'I': i++; break;
    //         case 'o':
    //         case 'O': o++; break;
    //         case 'u': 
    //         case 'U': u++; break;
    //         case '\n': newline++; break;
    //         default: other++;
    //     }
    //  }
    // printf ("%02d, %02d, %02d, %02d, %02d, %02d, %02d",a, e, i, o, u, newline, other);

    // char s[10],c;
    // int i=0,j=034701,k;
    // while (j>0){
    //     s[i++] = j%10;
    //     j /= 10;
    // }
    // s[k=i--] = 0;
    // while (i>=k/2){
    //     c = s[i] + '0';
    //     s[i] = s[k-i-1] + '0';
    //     s[k-i-1] = c;
    //     i--;
    // }
    // printf("%s",s);

    // char s[10]="123456789";
    // int i,j;
    // for (i=8,j=205;i>=0;i--){
    //     s[i] = '0' + j % 2;
    //     j /= 2;
    // }
    // printf("%s",s);
    int cnt=1;
    do {
        putchar('*');
        cnt *= 2;
        if(cnt >> 2)
            continue;
        putchar('*');    
    }while (cnt <= 16);
    
    return 0;
}

// 14785

// 58741/0

// i4
// c = '1'

// i3
// i2