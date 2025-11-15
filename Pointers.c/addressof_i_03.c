#include<stdio.h>
int returning_5(int*ptr) {
    printf("address of ptr is: %p\n", (void*)ptr);
    printf("value of *ptr is: %d\n", *ptr);
    return 5;
}
int main() {
    int i=39;
    int*ptr=&i;
    printf("the address of i is: %p\n", (void*)&i);
    returning_5(ptr);
    return 0;
}