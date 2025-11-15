#include<stdio.h>
int mult(int, int);
    int mult(int x, int y){
        printf("The product of %d and %d is %d\n", x, y, x*y);
        return x*y;
    }
    int main() {
        int a=5;
        int b=8;
        mult(a, b);

        int a1=81;
        int b1=3;
        mult(a1, b1);

        int a2=65;
        int b2=44;
        mult(a2, b2);

        int a3=6;
        int b3=44;
        mult(a3, b3);

        return 0;
    }
