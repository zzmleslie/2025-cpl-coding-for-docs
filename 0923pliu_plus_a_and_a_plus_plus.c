#include<stdio.h>
int main() {
    int a1 = 0 , a2 = 0 ;
    int b = a1 ++;
    int c = a2 ++;
    printf_s("b = %d , a1 = %d\n", b , a1);
    printf_s("c = %d , a2 = %d\n", c , a2);
    return 0;
}
