#include<stdio.h>
int main() {
    long long res = 1;
    int n;
    scanf_s("%d", &n);
    for ( ; n > 1 ; n--) {
        res *= n;
    }//省去int i = 0;
    /*for (int i = 2; i <= n; i++) {
        res *= i;
    }*/
    printf("%lld",res);
    return 0;
}