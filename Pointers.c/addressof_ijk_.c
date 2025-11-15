#include<stdio.h>
int main() {
    int i;
    int*j;
    int**k;
    j=&i;
    k=&j;
    printf("enter i value:\n");
    scanf("%d", &i);
    printf("value of i using i is: %d\n", i);
    printf("value of i using *j is: %d\n", *j);
    printf("value of i using **k is: %d\n", **k);
    printf("value of i using **(&j) is: %d\n", **(&j));
    return 0;
}