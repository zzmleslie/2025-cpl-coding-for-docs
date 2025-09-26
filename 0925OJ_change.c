#include<stdio.h>
int main() {
    int n;
    scanf_s("%d",&n);
    int fifty  , twenty , ten , five , one ;
    fifty = twenty = ten = five = one = 0;
    fifty = n / 50;
    n -=fifty * 50;
    twenty = n / 20;
    n -=twenty * 20;
    ten = n / 10;
    n -=ten * 10;
    five = n / 5;
    n -=five * 5;
    one = n;
    printf_s("%d\n%d\n%d\n%d\n%d\n",\
        fifty , twenty , ten , five , one );

    return 0;
}