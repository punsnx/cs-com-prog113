#include <stdio.h>
#include <stdlib.h>

int main()
{ 
    short buf[] = {21, 23, 24, 25, 26, 27, 28, 29, 30, 31,
32, 35, 36, 37, 38, 39, 42, 46, 47, 48};
    int l, m=0, n=19;
    do {
    l = m;
    l += n;
    l /= 2;
    if (buf[l] == 44)
    break;
    else if (buf[l] > 44)
    n = --l;
    else
    m = ++l;
    putchar('*');
    } while (m <= n);
}

// int main() {
//     (1>2) ? printf("1") : printf("2"); 
// }