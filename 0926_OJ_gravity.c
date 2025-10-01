#include<stdio.h>
#include<math.h>
int main() {
    double m , R;
    scanf("%lf %lf",&m ,&R);
    const double G = pow( 10 , -11) * 6.674;
    const double M = 77.15;
    double gravity = G * M * m * 1.0 /(pow( R,2));
    printf("%.3e\n",gravity);
    return 0;
}