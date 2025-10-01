#include<stdio.h>

int main() {

    int Array[5] = {0};
    for (int i = 0; i < 5; i++) {
        scanf("%d", &Array[i]);
    }
    int min = Array[0];
    for (int j = 1; j < 5; j++) {
        min = min >Array[j] ? Array[j] : min;
    }
    //如果数组越界不会报错，但是会取到越界的值
    printf("%d",min);
    return 0;
}