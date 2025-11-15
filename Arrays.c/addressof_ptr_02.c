#include<stdio.h>
int main() {
    int a[]={1,2,3,4,5,6,7,8,9,10};
    int*ptr=a;
    printf("the value at address %p is %d\n", (void*)(ptr+2), *(ptr+2));
    return 0;
}