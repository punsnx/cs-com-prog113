#include <stdio.h>

int main() {
    FILE *fp;
    fp = fopen("../data_source_1.dat","r");

    int e,i = 0;
    double m,b,x,y;
    //cal x,y and assign to struct array
    while ((e = fscanf(fp,"%lf  %lf",&m,&b)) != EOF){
        if (i == 0){
            x = 1;
        } else {
            x = y;
        }
        y = m * x + b;
        printf("e: %d i: %03d y: %.4lf = %.4lf * %.4lf + %.4lf\n",e,i, y, m, x, b);
        ++i;
    }
    printf("Anser is : %.4lf",y);
    return 0;
}
