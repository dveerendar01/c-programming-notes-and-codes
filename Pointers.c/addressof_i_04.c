#include<stdio.h>
int main() {
    int i=45;
    int*ptr1=&i;
    int*ptr2=&(*ptr1);
    printf("address of i for i is: %p\n", &i);
    printf("value of i for (&ptr1) is: %d\n", &ptr1);
    printf("value of i for (&ptr2) is: %d\n", &ptr2);
    return 0;
}