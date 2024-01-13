#include <stdio.h>

int main()
{
   int amount = 98;
   int b50,b20,b5,b1;
   b50 = amount/50;
   amount = amount%50;

   b20 = amount/20;
   amount = amount%20;

   b5 = amount/5;
   amount = amount%5;

   b1 = amount/1;
   amount = amount%1;

   printf("1: %d\n5: %d\n20: %d\n50: %d",b1,b5,b20,b50);
    
    return 0;
}