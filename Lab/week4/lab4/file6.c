#include <stdio.h>
#include <stdlib.h>

int main()
{
    char goal_input[12],collect_input[12],s[1]="s";
    int day = 0;float total = 0,goal,collect;
    printf("Enter your goal amount: ");fgets(goal_input,12,stdin);
    goal = atof(goal_input);
    if (goal < 1){
        return 0;
    }
    while (total < goal){
        ++day;
        printf("Enter money collected today: ");fgets(collect_input,12,stdin);
        collect = atof(collect_input);total += collect;
        if (total >= goal){
            break;
        }
        printf("Total money collected up to day %d is %.2f. You need %.2f more.\n", day, total, goal-total);
    }
    if (day == 1){
        s[0] = 0;
    }
    printf("Congratulations! You take %d day%s to reach your goal.",day,s);
    return 0;
}