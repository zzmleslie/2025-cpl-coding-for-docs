#include<stdio.h>
#include<math.h>

#define RAD_TO_DEG (180/(4 * atan(1)))//注意括号！

typedef struct polar_V{
    double magnitude;
    double angle;
}polar_v;

typedef struct rect_V{
    double x;
    double y;
}rect_v;

polar_v rad_to_deg(rect_v rt);

int  main(){
    puts("input x and y coordinates ,input q to quit");//put(str)可以输出语句
    rect_v rt;
    polar_v st;
    while (scanf("%lf %lf", &rt.x, &rt.y ) == 2)//成功传参两个坐标
    {
       st = rad_to_deg(rt);
        printf("magnitude = %0.2f ,angle = %0.2f", st.magnitude, st.angle);//实际数超过栏宽就按实际数输出
    }
    return 0;
}
polar_v rad_to_deg(rect_v rt){
    polar_v st;
    st.magnitude = sqrt(pow(rt.x, 2) + pow(rt.y , 2));
    st.angle = RAD_TO_DEG * atan2(rt.y , rt.x);
    return st;
}