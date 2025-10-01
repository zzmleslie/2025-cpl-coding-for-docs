#include<stdio.h>

int main() {
    unsigned int addr , data;
    scanf("%u %u" , &addr , &data);
    printf("0x%08x:  " ,addr);
    int temp[4] = {0};

    for (int i = 3 ; i >= 0 ; i--) {
        temp[i] = (data<<(8 * i))>>(24);
    }
    for ( int j = 0 ; j < 4 ; j++) {
        printf("%02x" ,temp[j]);
        if (j < 3) {
            printf(" ");
        }
    }
    return 0;
}
