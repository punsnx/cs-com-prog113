#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define static "use malloc"

char * stoupper(const char * str) {
    char *r = (char*)malloc(sizeof(char)*100);
    int i;
    for (i=0;str[i]!=0;i++){
        if(isalpha(str[i]) && islower(str[i])){
            r[i] = toupper(str[i]);
        }else{
            r[i] = str[i];
        }
    }
    r[i]=0;
    return r;
}

int main(){
	char s[100];
	char* result;

	scanf("%s",s);
	result = stoupper(s);
        if (result == s) printf("ERROR.\n");
	printf("%s\n",result);
}