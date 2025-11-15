#include<stdio.h>
int main() {
    int ptr=8;
    int*ptr1=&ptr;
    int**ptr2=&*ptr1;
    printf("the value of ptr is %d\n", ptr);
    printf("the address of *ptr1 is %p\n", &ptr);
    printf("the address of **ptr2 is %p\n", &*ptr1);
    ptr++;
    printf("the value after increment is %d\n", ptr);
    return 0;
}