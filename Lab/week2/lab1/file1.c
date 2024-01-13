#include<stdio.h>
int main() {
    int computer_time = 785;  // ในโปรแกรมตรวจอาจเปลี่ยนค่าของตัวแปรนี้ แต่นิสิตไม่ต้องเปลี่ยนค่าของตัวแปรนี้
    int days,hours,minutes;
    hours = computer_time/60;
    computer_time = computer_time%60;
    days = hours/24;
    hours = hours%24;
    minutes = computer_time;
    printf("It is %d days %d hours and %d minutes.",days,hours,minutes);
    return 0;
}