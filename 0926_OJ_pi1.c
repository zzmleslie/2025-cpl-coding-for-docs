#include<stdio.h>
#include<math.h>

int main() {
    double pi4 = 4 * atan(1 / 5.0) - atan( 1 / 239.0 );
    double pi = log(pow(640320 ,3) + 744) / (sqrt ( 163 ));
    printf("%.15f\n%.15f\n",pi4 * 4 , pi );
    return 0;
}