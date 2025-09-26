#include<stdio.h>
int main() {
    char name[21];
    int pre = 0;
    double frac , factor;
    char unit;
    scanf("%s %d %lf %lf %c", &name , &pre , &frac , &factor , &unit);
    name[2] = '\0';
    unit -= 32;
    printf_s("%s: %d (%.5f) | %.5E %.5f %c",name,pre,frac,(pre+frac),((pre+frac)*factor),unit);
    return 0;
}