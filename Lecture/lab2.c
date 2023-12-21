#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 22.0/7
int main() {
    float radius = 1.5;
    float volumn;
    volumn = (4.0/3) * PI * radius * radius * radius;
    printf("The volumn of this sphere is %.2f",volumn);
    return 0;
}