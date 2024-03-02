#include<stdio.h>
#include<string.h>

struct Word {
    char word[21];
	unsigned int count;
};

int main(){
        char input[21];
        int i, last_word = 0, find = 0;
        struct Word data[20] = {0};
        scanf("%20s", input);

        while(last_word < 20){
			find = 0;
			if (last_word == 0){
				if (!(strcmp(input,"exit"))) break;
				sprintf(data[0].word,"%s",input);
				data[0].count = 1;  
				++last_word;
			}

			scanf("%20s", input);
			if (!(strcmp(input,"exit"))){
				break;
			}	
			for(i = 0;i<last_word;i++){
				if (!(strcmp(input,data[i].word)))
				{
					data[i].count++;
					find = 1;
				}
			}
			if(!find) //find = 0
			{
				sprintf(data[i].word,"%s",input);
				data[i].count = 1;  
				++last_word;
			}
        }

        printf("Output:\n");
        for(i=0;i<last_word;i++){
                printf("%s = %d\n", data[i].word, data[i].count);
        }
}