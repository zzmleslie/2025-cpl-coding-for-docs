#include<stdio.h>
#include<math.h>

int main() {
    double P , L , T;
    scanf("%lf %lf %lf", &P , &L , &T);
    double n = P * pow(L,3) / (8.314 * T);
    printf("%.4e\n",n);
    return 0;
}