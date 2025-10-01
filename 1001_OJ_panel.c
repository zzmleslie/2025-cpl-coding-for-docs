#include<stdio.h>

int main() {
    int W;
    char clean1[10],clean2[10];
    char ID[55] , Username[55] ,Email[55];
    scanf("%d",&W);
    scanf("%[\n]",clean1);
    scanf("%[\n]",clean2);
    scanf("%[^,],%[^,],%[^\n]", ID , Username , Email);
    ID[W] = '\0';
    Username[W] = '\0';
    Email[W] = '\0';
    printf("| ID       | %-*s |\n",W,ID);
    printf("| Username | %-*s |\n",W,Username);
    printf("| Email    | %-*s |\n",W,Email);
    return 0;
}