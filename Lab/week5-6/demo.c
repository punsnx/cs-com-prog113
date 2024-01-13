#include <stdio.h>

void h(char a[])
{
while (*a != '\0') {
printf("%c", *a-1);
a++;
printf("%c",*a);
}
}

int main() {
    h("hello"); 
    return 0;
}