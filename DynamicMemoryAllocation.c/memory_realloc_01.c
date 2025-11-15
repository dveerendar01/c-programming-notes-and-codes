#include<stdio.h>
#include<stdlib.h>
int main() { // realloc is used to reallocate memory.
    int n=5;         // ptr=realloc(ptr, newsize);
    int*ptr;         //  ptr=realloc(ptr, 10*sizeof(int));
    scanf("%d", &n);
    ptr=(int*)malloc(n*sizeof(int));
    ptr[0]=3;
    printf("%d\n", ptr[0]);
    ptr=realloc(ptr,10*sizeof(int));
    free(ptr);
    return 0;
}
