#include <stdio.h>

int charcount(char *s){
    int i,count=0;
    for (i=0;s[i]!=0;i++){
        ++count;
    }
    return count;
}

void charweave(char *s,char *result)
{
    int i,count = charcount(s);
    for(i=1;i<=count;i++){
        result[2*i-2]=s[i-1];
        result[2*i-1]=s[count-i];
    }
    result[2*i-2]=0;
}

int main()
{  char str[5],result[10];

   printf("String: ");
   gets(str);   /* read a line of characters from the input to "str" variable */
   charweave(str,result);
   printf("Output: %s\n",result);
   return 0;
}