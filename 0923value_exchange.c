#include<stdio.h>
int main(){
    int a = 10;
    int b = 20;

    printf_s("a: %d, b: %d\n", a , b );
    int temp = a;
    a = b;
    b = temp;
    printf_s("a: %d, b: %d\n", a , b );
    return 0;
}