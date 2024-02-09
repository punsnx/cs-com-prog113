#include <stdio.h>

void copy_str(char * src, char * dest){
    int i;
    for(i=0;src[i];i++){
        dest[i] = src[i];
    }
    dest[i]=0;
}
int check_dif_str(char * prev,char * cur){
    int i,count;
    for(count=i=0;cur[i];i++){
        if (cur[i] != prev[i]){
            ++count;
        }
    }
    return count;
}
void get_str(char * str,int * chain,int * lower){
    int i;
    scanf("%s",str);
    for(i=0;str[i];i++){
        if(str[i] >= 97 && str[i] <=122){
            *chain = 0;
            // *lower = 1;
            // printf("YES %c\n",str[i]);
        }            
    }
}

int main() {
    int size,n,i,c,lower=0,chain=1;
    scanf("%d",&size);
    scanf("%d",&n);
    if (
        size < 3 || size >= 1000 || 
        n <= 1 || n >= 30000
    )
        return 0;

    char tmp[size+1],str[size+1];//+1 for NULL
    
    for(i=0;i<n;i++){
        get_str(str,&chain,&lower);
        // scanf("%s",str);
        if(i==0)
        {
            // if(lower)
            // {
            //     return 0;
            // }
            copy_str(str,tmp);
        }
        c = check_dif_str(tmp,str);
        if(c <= 2 && chain)
        {
            copy_str(str,tmp);
        }
        else 
        {
            chain = 0;
        }
    }
    printf("%s",tmp);
    return 0;
}