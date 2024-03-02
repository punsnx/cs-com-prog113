#include <stdio.h>

typedef enum _DayOfWeek{
    TUE = 1, WED, THU, FRI, SAT, SUN, MON
}DayOfWeek;

DayOfWeek findDayOfWeek(int day, int month) {
	int total_day = 0,DaysOfMonth[12+1] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
	if (day < 1) day = 1;
	if (month < 1) month = 1;

	if (month > 12) month = 12;
	if (day > DaysOfMonth[month]) day = DaysOfMonth[month];
	
	for(int i = 0;i<month;i++) total_day += DaysOfMonth[i];
	total_day += day;
	DayOfWeek d = (total_day%7 == 0) ? 7 : total_day%7;  
	// printf("%d %d",total_day,d);
	return d;
}

int main()
{
	int day, month;
	DayOfWeek dow;

	printf("Day:1 Month:1 of Year 2013 is Tuesday.\n");
	printf("Enter Day and Month: ");
	scanf("%d %d", &day, &month);
	dow = findDayOfWeek(day, month);
	printf("Day:%d Month:%d of Year 2013 is ", day, month);
	switch(dow){
		case SUN: printf("Sunday.\n"); break;
		case MON: printf("Monday.\n"); break;
		case TUE: printf("Tuesday.\n"); break;
		case WED: printf("Wednesday.\n"); break;
		case THU: printf("Thursday.\n"); break;
		case FRI: printf("Friday.\n"); break;
		case SAT: printf("Saturday.\n"); break;
	}
}