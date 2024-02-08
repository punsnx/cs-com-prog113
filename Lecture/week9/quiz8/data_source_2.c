#include <stdio.h>

typedef struct{
    double m;
    double b;
} Record;

int main() {
    FILE *fp;
    fp = fopen("../data_source_2.dat","r");

    Record tmp;
    size_t e;
    int count = 0;
    //count struct
    while ((e = fread(&tmp,sizeof(Record),1,fp)) != 0)
        ++count;
    fseek(fp,0,SEEK_SET);

    Record rec[count];
    int i = 0;
    double x,y;
    //cal x,y and assign to struct array
    while ((e = fread(&tmp,sizeof(Record),1,fp)) != 0){
        rec[i] = tmp;
        if (i == 0){
            x = 1;
        } else {
            x = y;
        }
        y = rec[i].m * x + rec[i].b;
        printf("i: %03d y: %.4lf = %.4lf * %.4lf + %.4lf\n",i, y, rec[i].m, x, rec[i].b);
        ++i;
    }
    printf("Anser is : %.4lf",y);
    return 0;
}
