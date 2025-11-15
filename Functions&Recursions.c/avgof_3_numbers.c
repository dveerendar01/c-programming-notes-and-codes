#include<stdio.h>
float average(int, int, int);
float average(int a, int b, int c){
    return (a+b+c)/(3.0);
}
int main() {
    int a, b, c;
    printf("enter a:\n");
    scanf("%d", &a);
    printf("enter b:\n");
    scanf("%d", &b);
    printf("enter c:\n");
    scanf("%d", &c);
    printf("the average of %d %d and %d is %f\n", a, b, c, average(a,b,c));
    return 0;
}