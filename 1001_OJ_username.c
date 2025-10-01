#include<stdio.h>
#include<string.h>
int main() {
    char s[105];
    scanf("%[^\n]s",s);
    printf("%d\n" ,strlen(s));
    s[20] = '\0';
    printf("\"%s\"", s);
    return 0;
}