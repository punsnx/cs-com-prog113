#include <stdio.h>
int main() {
    int computer_time = 1678;

    int days,hours,minutes;
    hours = computer_time/60;
    minutes = computer_time%60;
    days = hours/24;
    hours = hours%24;;
    printf("It is %d days %d hours and %d minutes.\n",days, hours, minutes);
    return 0;
}