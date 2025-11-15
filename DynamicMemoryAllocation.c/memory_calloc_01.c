#include<stdio.h>
#include<stdlib.h>
int main() {
    int n;
    int*ptr;
    scanf("%d", &n);
    ptr=(int*)calloc(n,sizeof(int));
    ptr[0]=18;
    printf("%d\n", ptr[0]);
    free(ptr); // free(ptr) use it, to avoid memory leak.
    return 0;
}