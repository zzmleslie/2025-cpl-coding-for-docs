#include<stdio.h>

int main() {
    int a , swap = 0;
    scanf("%d",&a);
    swap = ( a % 10 ) * 100 + a / 100 +( a / 10 )% 10 * 10;
    printf("%d\n",swap);
    return 0;
}