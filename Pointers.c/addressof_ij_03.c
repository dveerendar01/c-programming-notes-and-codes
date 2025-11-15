#include <stdio.h>

int main() {
    int i;
    int*j = &i;
    printf("enter i:\n");
    scanf("%d", &i);
    printf("address of i using (&i) is %p\n", (void*)(&i));
    printf("address of i using j is %p\n", (void*)j);
    printf("address of j using j is %p\n", (void*)j);
    printf("address of i using *(&i) is %p\n", (void*)*(&i));
    printf("address of i using &j is %p\n", (void*)&j);
    printf("address of j using &j is %p\n", (void*)&j);
    printf("value of i using i  is %d\n", i);
    printf("value of j using *j is %d\n", *j);
    printf("address of i using *j is %p\n", (void*)*j);
    printf("value of j using *(&i) is %d\n", (void*)*(&i));
    return 0;
}