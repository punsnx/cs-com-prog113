#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct _good
{
    char name[10];
    int price;
} good;
int main()
{
    putc('c', stdout);
    putc('c', stdout);
    putchar('c');
    putchar('c');
    fputc('a', stdout);
    fputc('a', stdout);
    putchar('\n');

    // FILE * file = fopen("scores.txt","r");
    // char c;
    // while((c=fgetc(file))!=EOF)
    // {
    //     printf("%c",c);
    // }
    // printf("\n");
    // char *str = (char*)malloc(100*sizeof(char));
    // sprintf(str,"HelloWorld");
    // printf("%s\n",str);
    // sprintf(str,"Hello");
    // printf("%s\n",str);

    // FILE * file = fopen("file1","wb");
    // int n =2;
    // good *g = (good*)malloc(n*sizeof(good));
    // for(int i = 0;i<n;i++){
    //     // g[i].name = (char*)malloc(10*sizeof(char));
    //     sprintf(g[i].name,"good%d",i);
    //     g[i].price = (i+1)*100;
    //     printf("%s %d\n",g[i].name,g[i].price);
    //     fwrite(&(g[i]),sizeof(good),1,file);
    // }

    // FILE * file = fopen("file1","rb");
    // good *goods = (good*)malloc(2*sizeof(good));
    // fread(goods,sizeof(good),2,file);
    // printf("%s %d\n",(goods+1)->name,(goods+1)->price);

    FILE *file = fopen("stock-log-20170401.txt", "r");
    int date, h, m, s, n;
    double price;
    char name[20];
    int g;
    fscanf(file, "%d", &g);
    while (fscanf(file, "%d,%d:%d:%d,%[^,],%d,%lf", &date, &h, &m, &s, name, &n, &price) == 7)
    {
        // printf((c<=32) ? ((c==10)? "%c": "%d") : "%c",c);
        char *str = (char *)malloc(100 * sizeof(char));
        sprintf(str, "%d,%d:%d:%d,%s,%d,%lf", date, h, m, s, name, n, price);
        printf("%lu + 1 NULL\n%s\n", strlen(str), str);
    }

    return 0;
}