#include<stdio.h>
int main() {

    int a,b=0;
    scanf_s("%d" , &a);
    b+= a % 10;
    a /= 10;
    b+= a % 10 + b * 10;
    a /= 10;
    b+= a % 10 + b * 10;
    printf_s("%d",b);
    return 0;
/*
    int a;
    scanf_s("%d",&a);
    int b = a %10;
    int c = a / 100;
    int d = ((a - b)/10)%10;
    printf_s("%d%d%d",b,d,c);
*/
}