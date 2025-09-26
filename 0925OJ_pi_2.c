#include<stdio.h>
#include<math.h>
int main() {
    double pi1 ,pi4;
    pi1 = (log(pow(5280,3) * pow((236674 + 30303 * sqrt(61)),3) + 744)) / (sqrt(427));
    pi4 = 6 * atan(1.0 / 8) + 2 * atan(1.0 / 57) + atan(1.0 / 239 );
    printf("%.15f\n%.15f\n",pi1,pi4 * 4);
    return 0;
}