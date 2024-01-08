#include <stdio.h>
#include <stdlib.h>

int getCommand(){
    printf("\nOperator: ");
    char c; scanf("\n%c",&c);
    if (c == '+' || c == '-' || c == '*' || c == '/'){
        return c;
    }
    return 0;
}

long double makeOperate(char c,long double v,double iv){
    if (c == '+'){
        return v+iv;
    } else if (c == '-'){
        return v-iv;
    } else if (c == '*'){
        return v*iv;
    } else if (c == '/'){
        return v/iv;
    }
    return 0;
}

int main() {
    char c;
    long double value;double input_value;
    printf("Initial Value: ");scanf("\n%Lf",&value);

    while((c=getCommand())){
        printf("Input Value: ");scanf("\n%lf",&input_value);
        value = makeOperate(c,value,input_value);
        printf("Present Value is %.4Lf\n",value);

    }
    printf("\nFinish Calculation. Final Value is %.4Lf",value);
    return 0;
}