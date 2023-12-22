#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    char size_str[3],extra_1_str[3],extra_2_str[3],extra_3_str[3];
    printf("Welcome to My Pizza Shop!!\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("Enter pizza size (1=s, 2=m, or 3=l): ");fgets(size_str,3,stdin);
    printf("Extra pepperoni? (1=yes, 0=no): ");fgets(extra_1_str,3,stdin);
    printf("Extra cheese? (1=yes, 0=no): ");fgets(extra_2_str,3,stdin);
    printf("Extra mushroom? (1=yes, 0=no): ");fgets(extra_3_str,3,stdin);
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    int diameter,size=atoi(size_str),extra_1=atoi(extra_1_str),extra_2=atoi(extra_2_str),extra_3=atoi(extra_3_str);
    int fixedcost = 5,basecost = 2;
    float area,price,cost,extracost = 0;
    if (extra_1){extracost += 0.5;}
    if (extra_2){extracost += 0.25;}
    if (extra_3){extracost += 0.30;}

    if (size == 1){diameter=10;}
    else if (size == 2){diameter=16;}
    else if (size == 3){diameter=20;}

    area = (M_PI * pow(diameter,2))/4;
    cost = fixedcost + (basecost * area) + (extracost * area);
    price = 1.5 * cost;
    printf("Your order costs %.2f baht.\nThank you.",price);
    
    return 0;
}