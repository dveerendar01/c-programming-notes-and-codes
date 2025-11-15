#include<stdio.h>
int main() {
    char s1[100]="VEERENDAR";
    char s2[]="RATHOD";
    char target[100];
    strcpy(target, s1);
    strcpy(target, s2);
    printf("%s\n", target);
    return 0;
}