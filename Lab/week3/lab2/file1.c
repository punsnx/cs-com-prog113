#include <stdio.h>
#include <stdlib.h>
int main()
{
    char hour_str[4], min_str[3];
    int hour, minute;

    printf("Enter hour: ");
    fgets(hour_str, 4, stdin);

    printf("Enter minute: ");
    gets(min_str);

    hour = atoi(hour_str);
    minute = atoi(min_str);

    printf("Time is %02d:%02d", hour, minute);
    return 0;
}