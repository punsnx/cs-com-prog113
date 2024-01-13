#include <stdio.h>
#include <stdlib.h>

int main()
{
    char A_str[5],B_str[5],C_str[5];
    int A,B,C;
    printf("Enter length of side A: ");fgets(A_str,5,stdin);
    printf("Enter length of side B: ");fgets(B_str,5,stdin);
    printf("Enter length of side C: ");fgets(C_str,5,stdin);
    A = atoi(A_str);B = atoi(B_str);C = atoi(C_str);
    if (!((A == 0 || B == 0 || C == 0) || (A+B <= C || A+C<=B || B+C <= A)) ) {
        if (A == B && B == C){
            printf("Triangle type is equilateral.");
        } else if (A == B || A == C || B == C){
            printf("Triangle type is isosceles.");
        } else {
            printf("Triangle type is scalene.");
        }
    } else {
        printf("Triangle type is invalid.");
    }


    return 0;
}