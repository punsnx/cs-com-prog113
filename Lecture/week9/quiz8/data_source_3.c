#include <stdio.h>


typedef struct{
    double m;
    double b;
    int id;
} Record;
int main() {
    FILE *fp;
    fp = fopen("../data_source_3.dat","rb");

    Record tmp;
    size_t e;
    int count = 0;
    //count struct
    while ((e = fread(&tmp,sizeof(Record),1,fp)) > 0)
        ++count;
    fseek(fp,0,SEEK_SET);

    Record rec[count];
    int index = 0;
    //assign to struct array
    while ((e = fread(&tmp,sizeof(Record),1,fp)) > 0){
        rec[index] = tmp;
        // printf("id: %d m: %lf b: %lf\n",rec[index].id,rec[index].m,rec[index].b);
        ++index;
    }
        
    //sort min-max
    int i,j,k;
    double x,y;
    for (i = 0; i < count-1; i++){
        j = i;
        for (k = i+1; k < count; k++){
            if (rec[j].id > rec[k].id)
                j = k;
        }
        tmp = rec[i];
        rec[i] = rec[j];
        rec[j] = tmp;
    }
    for (i=0;i<count;i++){
        if (i == 0){
            x = 1;
        }else {
            x = y;
        }
        y = rec[i].m * x + rec[i].b;
        printf("i: %03d id: %04d y: %.4lf = %.4lf * %.4lf + %.4lf\n",i,rec[i].id, y, rec[i].m, x, rec[i].b);
    }
    printf("Anser is : %.4lf",y);
    return 0;
}
