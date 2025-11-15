#include<stdio.h>
#include<stdlib.h>
int main() {
    /* functions in Dynamic in C:
    i) malloc() --> ex: ptr=(int*)malloc(30*sizeof(int))
    ii) calloc() --> ex: ptr=(int*)malloc(30,sizeof(int))
    iii) free() --> to free memory or clear ex: free(ptr) */

    int n;
    int*ptr;
    scanf("%d", &n);
    ptr=(int*)malloc(n*sizeof(int));
    // int[arr]; --> not allowed in C
    ptr[0]=3;
    ptr[1]=6;
    printf("%d", ptr[0]);
    return 0;
}