#include<stdio.h>

int main() {
    int x;
    char c;
    scanf("%d ", &x);
    printf("%d\n", x);
    scanf("%c", &c);
    printf("c\n", &c);//可以输出表示输入的字符串是存放在缓冲区中，通过scanf被逐个读入的



    return 0;
}

