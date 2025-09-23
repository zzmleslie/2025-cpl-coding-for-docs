#include<stdio.h>
int main() {
    int hour1,hour2,min1,min2;
    scanf_s("%d %d",&hour1,&hour2);
    scanf_s("%d %d",&min1,&min2);

    //int res_hour;
    //int res_min;

    int duration = (hour1 * 60 + min1) - hour2 * 60 + min2;
    printf_s("duration: %d hour %d minutes \n", duration / 60,duration % 60);
    //除零warning ：.printf_s("%d",duration / 0);

    return 0;
}