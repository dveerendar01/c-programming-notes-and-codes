#include<stdio.h>
void sum(int*, int*);
void average(int*, int*);
void sum(int*x, int*y) {
    int sum=*x+(*y);
    printf("sum of two numbers is; %d\n", sum);
}
void average(int*x, int*y) {
    float average=(*x+(*y))/(2.0);
    printf("average of two numbers is: %.3f\n", average);
}
int main() {
    int x, y;
    printf("enter two numbers x and y:\n");
    scanf("%d %d", &x, &y);
    sum(&x, &y);
    average(&x, &y);
    return 0;
}