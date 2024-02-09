#include <stdio.h>

int remove_vowel(char str[]){
    int i,j,count,tmp;
    for(count=0;str[count];count++);
    // printf(">>%d\n",count);

    // for(i=0;i<count+1;i++){
    //     printf((str[i]) ? "%c":"0",str[i]);
    // }printf("\n");

    for(i=0;i<count;i++){
        if(
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' || 
            str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'
        ){
            for(j=i;j<count-1;j++){
                tmp = str[j];
                str[j] = str[j+1];
                str[j+1] = tmp;
            }
            str[j] = 0;
            --i;//recheck swap vowel to back;
        }
    }
    // for(i=0;i<count+1;i++){
    //     printf((str[i]) ? "%c":"0",str[i]);
    // }printf("\n");

}

int main()
{  char str[80];

  printf(" Input: ");
  gets(str);

  remove_vowel(str);
  printf("Output: %s\n",str);

  return 0;
}