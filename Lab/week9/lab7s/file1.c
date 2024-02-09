#include <stdio.h>

int main() {
    char str[100] = {0};
    printf("String (without a space): ");
    scanf("%s",str);
    int i,count=0;
    for(i = 0; str[i] != 0; i++){
        if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U'){
            printf("%c ",str[i]);
            ++count;
        }
        else if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
            printf("%c ",str[i]);
            ++count;
        }
    }
    printf("\nThis string contains %d vowel",count);
    puts((count > 1) ? "s." : ".");
}