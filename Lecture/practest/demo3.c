#include <stdio.h>

int main() {
    char s1[]={'u','n','i','v','e','r','s','i','t','y'};
    char s2[] = "university";
    printf("%d",sizeof(s1)-sizeof(s2));
}