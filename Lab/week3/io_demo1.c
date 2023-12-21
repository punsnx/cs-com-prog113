#include <stdio.h>
#include <stdlib.h>
int main() {
    char hour_str[3], min_str[3];
    int hour, minute;
    printf("Enter hour: ");
    fget(hour_str, 3, stdin);
    printf("Enter minute: ");
    get(min_str);
    hour = atoi(hour_str);
    minute = atoi(min_str);
    printf("Time is %d:%d, hour, minute");
    return 0;
}