#include <stdio.h>
int main()
{   
	unsigned char x;
    int n;

    printf("Enter an 8-bit number: ");
    scanf("%d", &n);
    x = (unsigned char)n;
    int numbits = 
	(n & 0x1)
	+ (n>>1 & 0x1)
	+ (n>>2 & 0x1)
	+ (n>>3 & 0x1)
	+ (n>>4 & 0x1)
	+ (n>>5 & 0x1)
	+ (n>>6 & 0x1)
	+ (n>>7 & 0x1);
    
    printf("The number %d has %d non-zero bits\n", x, numbits);
    return 0;
}
