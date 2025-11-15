#include<stdio.h>
struct vector {  // struct vector or V
    int i;
    int j; // or int i,j;
}; // or } V;
int main() {
    struct vector V={1,2};
    printf("the value of vector is %di+%dj", V.i, V.j);
    return 0;
}