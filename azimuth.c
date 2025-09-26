#include<stdio.h>
#include<math.h>
#define PI 3.14159265358979323846

int main() {
    double xa , ya , xb , yb;
    scanf("%lf %lf\n%lf %lf", &xa , &ya , &xb , &yb);
    double len = sqrt((pow((xa - xb),2)+pow((ya-yb),2)));

    double angle;
    if (ya - yb > 0){
        angle = (atan((( xb - xa) * 1.0)/(yb - ya)))/(2 * PI) *360 +180.0;
    }
    else if (ya == yb) {
        if (xa - xb > 0) {
            angle = 270.0;
        }else {
            angle = 90.0;
        }

    }
    else {
        if (xb - xa < 0) {
            angle = 360 + (atan((( xb - xa) * 1.0)/(yb - ya)))/(2 * PI) * 360;
        }else if (xb - xa == 0) {
            angle = 0;
        }else {
            angle = (atan((( xb - xa) * 1.0)/(yb - ya)))/(2 * PI) * 360;
        }

    }
    printf_s("%.4f %.4f",len , angle);
    return 0;
}