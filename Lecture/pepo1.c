#include <stdio.h>
int main() {
    int amount = 98;
    int b50;
    b50 = amount/50;
    amount = amount % 50;
    printf("%d",b50);
    printf("%d",amount);
    printf("%d", 98/50);
    return 0;
}