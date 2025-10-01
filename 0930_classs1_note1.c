#include<stdio.h>

int main() {
    int x = 6;
    int a = 10, b = 5;
    if (a > b || x++) {
        //a>b = 1||已经为1，就会跳过x++
        printf("%d",x);
    }
    return 0;

}