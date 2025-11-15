#include<stdio.h>
#include<stdlib.h>
int main() {
    int n=6;
    int*ptr;
    scanf("%d", &ptr);
    ptr=(int*)calloc(n,sizeof(int));
    ptr[0]=45;
    printf("%d\n", ptr[0]);
    return 0;
}