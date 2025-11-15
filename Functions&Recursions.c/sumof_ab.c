#include<stdio.h>
int sum(int, int);
int sum(int x, int y){
    printf("The sum of %d and %d is %d\n", x, y, x+y);
    return x+y;
}
int main() {

    int a=1;
    int b=2;
    sum(a,b);

    int a1=12;
    int b1=23;
    sum(a1, b1);

    int a2=4;
    int b2=24;
    sum(a2, b2);

    return 0;
}