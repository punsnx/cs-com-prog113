#include <stdio.h>

int main() {
    char c;
    FILE * fp;
    fp = fopen("myfile", "r");

    fseek(fp, -1, SEEK_END);
    while ((c=fgetc(fp)) != EOF){
        printf((c != 0) ? "%c" : "0" , c );
    }
    
    

    return 0;
}