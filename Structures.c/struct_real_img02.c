#include<stdio.h>
typedef struct c {
    int real;
    int imaginary;
} complex;
int main() {
    complex c={4,8};
    printf("the value of complex number is %d+i%d\n", c.real, c.imaginary);
    return 0;
}