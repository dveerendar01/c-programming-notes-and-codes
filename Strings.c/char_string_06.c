#include<stdio.h>
int main() {
    char st[30];
    gets(st);  // returns same as input
    printf("%s", st); // int length = strlen(st)
    return 0;
}