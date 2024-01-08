#include <stdio.h>
#include <stdlib.h>

int to24hour(int h,char M){
    if (M == 'a'){
        if (h == 12){
            return 0;
        } 
        return h;
    } else if (M == 'p') {
        if (h == 12){
            return h;
        }
        return h + 12;
    }
    return -1;
}

int main() {
    //M = Meridiem
    char M;
    int hour,minute;
    printf("Enter a 12-hour time [eg. 12:34 am]: ");
    scanf("%d:%d %c",&hour,&minute,&M);
    (M <= 90) ? M = M + 32 : M ; 
    if((hour=to24hour(hour, M)) == -1){
        return 0;
    }
    printf("Equivalent 24-hour time: %02d:%02d",hour,minute);
    return 0;
}