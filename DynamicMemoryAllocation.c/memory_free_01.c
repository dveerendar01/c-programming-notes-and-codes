#include<stdio.h>
#include<stdlib.h>
int main() {
    int n; // or float n;
    int*ptr; // or float*ptr;
    scanf("%d", &n); // or scanf("%f", &n);
    ptr=(int*)malloc(n*sizeof(int)); // or ptr=(float*)malloc(n*sizeof(float));
    ptr=(int*)calloc(n,sizeof(int)); // or ptr=(float*)malloc(n,sizeof(float));
    ptr[0]=21;
    printf("%d", ptr[0]); // or printf("%f", ptr[0]);
    return 0;
}