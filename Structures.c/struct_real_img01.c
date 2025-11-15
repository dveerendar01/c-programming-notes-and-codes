#include<stdio.h>
typedef struct c {
    int real;
    int imaginary;
} complex;
void display(complex c) {
    printf("the value of complex is %d+i%d\n", c.real, c.imaginary);
}
int main() {
    complex carr[5];
    for(int i=0; i<5; i++) {
        printf("enter real part\n");
        scanf("%d", &carr[i].real);
        printf("enter imaginary part\n");
        scanf("%d", &carr[i].imaginary);
    }
    printf("\nDisplaying complex numbers:\n");
    for(int i=0; i<5; i++) {
        display(carr[i]);
    }
    return 0;
}
