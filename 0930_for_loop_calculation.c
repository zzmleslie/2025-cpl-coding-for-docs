#include<stdio.h>
#define N 9
int main()
{
    for (int i = 1 ; i <= N ;i++) {
        for ( int j = 1; j <= i ; j++) {
            printf("%d * %d = %d\t", j, i, i * j);
        }
        printf("\n");
    }
    return 0;
}