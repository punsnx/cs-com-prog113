#include <stdio.h>

typedef struct{
    double m;
    double b;
    int id;
} Record;
int main() {
    FILE *fp;
    fp = fopen("../data_source_4.dat","r");

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

    int i,j,k;
    //check ตัวซ้ำ
    for (i=0;i<count;i++){
        for (j=i+1;j<count;j++){
            if (rec[i].id == rec[j].id){
                printf("id: %d m: %lf b: %lf\n",rec[i].id,rec[i].m,rec[i].b);
                printf("id: %d m: %lf b: %lf\n\n",rec[j].id,rec[j].m,rec[j].b);
            }
        } 

    } 
    double x,y;
    //sort min-max // problem คือ swap ตัวมาก่อนไปหลัง
    // for (i = 0; i < count-1; i++){
    //     j = i;
    //     for (k = i+1; k < count; k++){
    //         if (rec[k].id < rec[j].id)
    //             j = k;
    //     }
    //     tmp = rec[i];
    //     rec[i] = rec[j];
    //     rec[j] = tmp;
    // }
    Record key;
    //sort using insertion sort
    for (i = 1; i < count; i++) {
        key = rec[i];
        j = i - 1;

        // Move elements of arr[0..i-1] that are greater than key
        // to one position ahead of their current position
        while (j >= 0 && rec[j].id > key.id) {
            rec[j + 1] = rec[j];
            j = j - 1;
        }
        rec[j + 1] = key;
    }
    // find x,y
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
