#include<stdio.h>
int main() {
    int i=2;
    int*ptr=&i; //ptr = pointer
    printf("address of i using &i is: %d\n", &i);
    printf("address of i using ptr is: %d\n", ptr);
    printf("value of i using *ptr is: %d\n", *ptr);
    return 0;
}