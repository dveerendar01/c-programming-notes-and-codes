#include<stdio.h>
int main() {
    int i=72;
    int*j;
    j=&i;
    printf("value of i is: %d\n", i);
    printf("address of i is: %p\n", &i);
    printf("address of i is: %p\n", *j);
    printf("value of i is: %d\n", *(&i));
    printf("value of j is: %d\n", j); 
    printf("address of j is: %p\n", &j);
    printf("address of j is: %p\n", *j);
    printf("value of j is: %d\n", *(&j));
    return 0;
}

