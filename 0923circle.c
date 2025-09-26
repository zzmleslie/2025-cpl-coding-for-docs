#include<stdio.h>
#include<math.h>
int main() {
     double r = 0.0;
    const double PI = 3.141592653589793;
    scanf_s("%lf", &r);
    double area = PI * r * r;
    double volume = 4 / 3.0 * PI * pow(r,3);
    printf_s("area = %10.9f\n volume = %-15.9f",area , volume );
    return 0;
}