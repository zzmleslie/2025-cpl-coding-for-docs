#include <stdio.h>

int main() {
    char month[20] ,weekday[20];
    int day, year, hour, minute, second;
    scanf("%s %d %d %s %d %d %d", month , &day , &year , weekday ,&hour , &minute , &second);
    weekday[3] = '\0';
    month[3] = '\0';
    printf("%s %s %02d %02d:%02d:%02d %04d", weekday , month ,day ,hour ,minute ,second ,year );

    return 0;
}