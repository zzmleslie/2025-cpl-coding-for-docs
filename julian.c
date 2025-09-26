#include<stdio.h>
int main() {
    int year , month , day;
    scanf("%d %d %d" , &year , &month , &day);
    int y = year + 4800 - (14 - month) / 12;
    int m = month + 12 * ((14 - month) / 12) - 3;
    int JDN = day + (153 * m + 2) / 5 + 365 * y + y / 4\
- y / 100 + y / 400 - 32045;
    printf_s("%d\n" , JDN);
    return 0;
}