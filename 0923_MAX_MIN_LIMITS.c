#include <float.h>
#include<stdio.h>
#include<limits.h>
int main() {
    double a = 0.0;
    float b = 0.0;
    printf("MAX %lld , MIN %lld\n",LONG_LONG_MAX,LONG_LONG_MIN);
    printf_s("%f\n",FLT_MAX);
    printf_s("%G\n",DLB_MAX);//??????0
    return 0;
}