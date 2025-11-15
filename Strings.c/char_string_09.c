#include<stdio.h>
#include<string.h>
int main() {
    char st1[50]="VEERENDAR";
    char st2[34]="veerendar";
    char st3[56]="RATHOD";
    char target[30];
    strcpy(target, st1);
    strcat(st1, st2);
    int a = strcmp("deep", "joke");
    printf("strcmp result: %d\n", a);
    printf("target: %s\n", target);
    printf("concatenated st1: %s\n", st1);
    return 0;
}