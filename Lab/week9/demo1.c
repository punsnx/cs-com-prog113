#include <stdio.h>
#include <stdlib.h>

void roman2arabic(char input[],char output[]){
    int count=0,i,from,to,word,j,k;
    for(i=0;input[i]!=0;i++);
        if(input[i] == ' '){
            ++count;
        }
    ++count;//word = space + 1

    char **split_words = (char **)malloc(sizeof(char *)*count);

    for(from=to=word=i=0;input[i]!=0;i++){
        if(input[i] == ' ' || input[i+1] == 0){
            to = i-1;
            split_words[word] = (char *)malloc(sizeof(char) * (to-from+2));//+ last + NULL = 2
            for (k=0,j=from;j<=to;j++){
                split_words[word][k++] = input[j]; 
            }
            split_words[word][k] = 0; 
            word++;
            from = i+1;
        }
    }
    for(word=0;word<count;word++){
        printf("%s\n",split_words[word]);
    }


}

int main()
{  char input[80]="There are III eggs on the table.",output[80];

   printf(" Input: ");
   gets(input);  /* read a line of characters from the input to "input" variable */

   roman2arabic(input,output);
//    printf("Output: %s\n",output);

   return 0;
}