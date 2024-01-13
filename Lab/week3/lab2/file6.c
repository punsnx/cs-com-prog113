#include <stdio.h>
#include <stdlib.h>

int main()
{
    char input_str[2];
    int isUpper,isLower,isDigit;
    fgets(input_str,2,stdin);
    isUpper = (input_str[0] >= 65 && input_str[0] <= 90);
    isLower = (input_str[0] >= 97 && input_str[0] <= 122);
    isDigit = (input_str[0] >= 48 && input_str[0] <= 57);
    if (isUpper){
        printf("Output: upper case");
    } else if (isLower){
        printf("Output: lower case");
    } else if (isDigit){
        printf("Output: digit");
    } else {
        printf("Output: others");
    } 
    return 0;
}