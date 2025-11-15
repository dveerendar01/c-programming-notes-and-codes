#include<stdio.h>
void swap(int*, int*);
void swap(int*a, int*b) {
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int main() {
    int a, b;
    printf("enter a:\n");
    scanf("%d", &a);
    printf("enter b:\n");
    scanf("%d", &b);
    printf("before swap: a=%d, b=%d\n", a, b);
    swap(&a, &b);
    printf("after swap: a=%d, b=%d\n", a, b);
    return 0;
}