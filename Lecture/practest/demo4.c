#include <stdio.h>

// double sum(float data[],int n)
// {


// }
// int main(){
//     float d[5] = {1,2,3,4,5}; 
//     sum(d,999);

// }

// void func();

void func(char c[]){
    c[1] = 'b';
}

int main() {
    // func();
    char a[] = "computer";
    func(a);
    printf("%s",a);
}