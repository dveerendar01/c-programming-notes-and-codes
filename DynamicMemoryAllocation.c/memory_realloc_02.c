#include<stdio.h>
#include<stdlib.h>
int main() {
    int n;
    int*ptr;
    scanf("%d", &n);
    ptr=(int*)malloc(n*sizeof(int));
    for(int i=0; i<n; i++) {
        scanf("%d", &ptr);
    }
    printf("The array is \n");
    for(int i=0; i<n; i++) {
        printf("%d\n", ptr[i]);
    }
    n=10;
    ptr=realloc(ptr, 10*sizeof(int));
    for(int i=0; i<n; i++) {
        scanf("%d", &ptr[i]);
    }
    printf("The array is \n");
    for(int i=0; i<n; i++) {
        printf("%d\n", ptr[i]);
    }
    free(ptr);
    return 0;
}

