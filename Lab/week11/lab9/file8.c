#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct _product {
    char name[30];
    int amount;
    double totalCost;
} Product;

void printStock(Product stock[], int nStock)
{
    int i;
    printf("%-20s|%6s|%-10s\n", "    Product Name", "Amount", "     Total");
    for (i = 0; i < nStock; i++) {
        printf("%-20s|%6d|%10.2lf\n",
            stock[i].name, stock[i].amount, stock[i].totalCost);
    }
}

// void reportStock(char *f){
//     char filename[100]={0};
//     strcat(filename,f);
//     strcat(filename,".txt");

//     FILE * file = fopen(filename,"r");
//     int n=0;
//     fscanf(file,"%d",&n);
//     printf("%d",n);

//     Product pList[n];
//     char line[50]={0};
//     char *token;



//     while (fgets(line, sizeof(line), file)) {
//         if(strlen(line) != 0){
//             for (int i=0;i<sizeof(line);i++)
//                 printf((line[i] != 0) ? "%c": "0",line[i]);
//             printf("\n");

//         }
//         // token = strtok(line, ",");
//         // while (token != NULL) {
//         //     printf("%s\n", token);
//         //     token = strtok(NULL, ",");
//         // }
//     }

//     // Product stock[]
// }
void reportStock(char *f)
{
    // char filename[50]={0};
    // strcat(filename,f);
    // strcat(filename,".txt");
    FILE *file = fopen(f, "r");

    int n;
    fscanf(file,"%d",&n);
    // printf("%d\n",n);

    int nStock = 0;
    Product stock[n];

    char name[30];int amount;double price;
    char line[50];
    int c=0,found;

    while (fgets(line, sizeof(line), file)) {
        ++c;found=0;
        sscanf(line, "%*[^,],%*[^,],%29[^,],%d,%lf", name, &amount, &price);
        if(c>1){
            // printf("%s %d %lf\n",name,amount,price);
            for (int i=0;i<nStock;i++) {
                if (strcmp(stock[i].name, name) == 0) {
                    found = 1;
                    stock[i].amount += amount;
                    stock[i].totalCost += price;
                    break;
                }
            }
            if (!found) {
                strncpy(stock[nStock].name, name, sizeof(stock[nStock].name));
                stock[nStock].name[sizeof(stock[nStock].name) - 1] = '\0';
                stock[nStock].amount = amount;
                stock[nStock].totalCost = price;
                nStock++;   
            }
        }
    }
    fclose(file);
    printStock(stock, nStock);
}
int main()
{
    char filename[20];
    scanf("%s", filename);
    // for (int i=0;i<sizeof(filename);i++)
    //     printf((filename[i] != 0) ? "%c": "0",filename[i]);
    // printf("\n");
    reportStock(filename);
}