#include <stdio.h>
#include <stdlib.h>

int main()
{
    char sticker_str[10], price_str[10];
    int sticker,use_sticker,percents;
    float price;
    fgets(sticker_str,10,stdin);
    fgets(price_str,10,stdin);
    sticker = atoi(sticker_str);
    if (sticker >= 9 ){
        percents = 40;
        use_sticker = 9;
    }
    else if (sticker >= 6 ){
        percents = 30;
        use_sticker = 6;
    }
    else if (sticker >= 3 ){
        percents = 20;
        use_sticker = 3;
    }
    else if (sticker == 2 ){
        percents = 15;
        use_sticker = 2;
    }
    else if (sticker == 1 ){
        percents = 10;
        use_sticker = 1;
    } else {
        percents = 0;
        use_sticker = 0;
    }
    price = atof(price_str);
    price = price * ( (100.00-percents)/100 );
    sticker -= use_sticker;
    printf("You get %d percents discount.\n",percents);
    printf("Total amount due is %.2f Baht.\n",price);
    printf("And you have %d stickers left.\n",sticker);
    return 0;
}