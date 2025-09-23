#include<stdio.h>

int main() {

    int price = 0;//最好还是要初始化
    printf_s("%d\n" , price);
    //未初始化时变量对应的内存地址会发生改变
    //貌似是八位binary的地址


    scanf_s("%d",&price);
    int change = 100 - price;
    printf_s("%d\n" , change);

    return 0;
}

