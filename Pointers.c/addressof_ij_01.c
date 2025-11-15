#include<stdio.h>
int main() {
    int i=9;
    int*j=&i; // j is a pointer pointing to i
    printf("address of i is: %p\n", &i);
    printf("address of j is: %p\n", &j);
    return 0;
}