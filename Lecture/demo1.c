#include <stdio.h>
int main() {
    unsigned char a = 5, b = 3;
    printf("%d, %d %d\n",a,b,0xf0);
    unsigned char r1, r2, r3, r4, r5, r6;
    r1 = a & b;
    //0101 AND 0011 = 0001 = 1
    r2 = a | b;
    //0101 OR 0011 = 0111 = 7
    r3 = a ^ b;
    //0101 XOR 0011 = 0110 = 6
    r4 = ~(a | 0xf0);
    //NOT(0101 OR 1111 0000 (240)) = NOT(1111 0101) = NOT(245) = 0000 1010 = 1
    r5 = a << 1;
    //0101 << 1 = 1010 = 10
    r6 = b >> 1;
    // 0011 = 0001 = 1
    printf("%d %d %d %d %d %d", r1, r2, r3, r4, r5, r6);


    // int Double;
    int i,j;
    char s[12] = "hello world";
    for (i=j=0;i<11;i++)
        if(s[i]!=s[j]&&s[i]!=' ')
            s[j++] = s[i] - 'a' + 'A';
    puts(s);


    // char c;
    // c = getchar ();
    // c = c + 1;
    // putchar (c);

    // int x = 12, y = 23;
    // int Z;
    // Z = -x + y--;
    // printf (" = %d", Z);

    // printf("%d",sizeof(short));
    
    return 0;
}