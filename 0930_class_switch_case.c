#include<stdio.h>

int main() {
    int month;
    scanf("%d",&month);
    switch(month) {
        case 1: printf("January"); break;
        case 2: printf("February"); break;
        case 3: printf("March"); break;
        case 4: printf("April"); break;
        case 5: printf("June"); break;
        case 6: printf("July"); break;
        case 7: printf("August"); break;
        case 8: printf("September"); break;
        case 9: printf("October"); break;
        case 10: printf("November"); break;
        case 11: printf("December"); break;
        case 12 : printf("December"); break;
        default: printf("Error");
    }
    switch (month) {
        case 3: case 4: case 5: printf("spring");break;
        case 6: case 7: case 8: printf("summer");break;
        case 9: case 10: case 11: printf("autumn");break;
        case 12: case 1: case 2: printf("winter");break;
        default: printf("Error");
            break;
    }
    int score;
    scanf("%d",&score);
    switch (score / 10) {
        case 9: case 10: printf("A"); break;
        //……………………
    }


    return 0;
}
