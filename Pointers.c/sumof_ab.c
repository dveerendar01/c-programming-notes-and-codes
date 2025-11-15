#include<stdio.h>
int sum(int, int);
int sum(int a, int b) {
    return a+b;
}
int main() {
    int a,b;
    printf("enter a:\n");
    scanf("%d", &a);
    printf("enter b:\n");
    scanf("%d", &b);
    printf("sum of %d and %d is: %d\n", a, b, sum(a,b));
    return 0; 
}