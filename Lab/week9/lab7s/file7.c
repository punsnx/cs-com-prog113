#include <stdio.h>

void roman2arabic(char input[],char output[])
{
    int count,i,n;
    for(count=0;input[count];count++);//size input brfore null terminator
    for(n=i=0;i<count;i++)
    {
        if(
            input[i] == 'I' &&
            input[i+1] == 'X'
        )
        {
            output[i-n] = '9';
            n+=1;i+=1;
        }
        else if(
            input[i] == 'I' &&
            input[i+1] == 'V'
        )
        {
            output[i-n] = '4';
            n+=1;i+=1;
        }
        else if(
            input[i] == 'I' &&
            input[i+1] == 'I' &&
            input[i+2] == 'I'
        )
        {
            output[i-n] = '3';
            n+=2;i+=2;
        }
        else if(
            input[i] == 'I' &&
            input[i+1] == 'I'
        )
        {
            output[i-n] = '2';
            n+=1;i+=1;
        }
        else if(input[i] == 'I')
        {
            output[i-n] = '1';
        }
        else if(
            input[i] == 'V' &&
            input[i+1] == 'I' &&
            input[i+2] == 'I' &&
            input[i+3] == 'I'
        )
        {
            output[i-n] = '8';
            n+=3;i+=3;
        }
        else if(
            input[i] == 'V' &&
            input[i+1] == 'I' &&
            input[i+2] == 'I'
        )
        {
            output[i-n] = '7';
            n+=2;i+=2;
        }
        else if(
            input[i] == 'V' &&
            input[i+1] == 'I'
        )
        {
            output[i-n] = '6';
            n+=1;i+=1;
        }
        else if(
            input[i] == 'V'
        )
        {
            output[i-n] = '5';
        }
        else
        {
            output[i-n] = input[i];
        }
    }
    output[i-n] = 0;//BURHHHH T T
}

int main()
{  char input[80],output[80];

   printf(" Input: ");
   gets(input);  /* read a line of characters from the input to "input" variable */

   roman2arabic(input,output);
   printf("Output: %s\n",output);

   return 0;
}