#include<stdio.h>
struct vector {
    int i;
    int j;
};
struct vector sumvector(struct vector v1, struct vector v2) {
    struct vector v3={v1.i+v1.j, v2.i+v2.j};
    return v3; //struct vector or V
}
int main() {
    struct vector v1={1,2};
    struct vector v2={3,4};
    struct vector v3=sumvector(v1, v2);
    printf("the value of vector v1 is %di+%dj\n", v1.i, v1.j);
    printf("the value of vector v2 is %di+%dj\n", v2.i, v2.j);
    printf("the sum of vector v1 and v2 is %di+%dj\n", v3.i, v3.j);
    return 0;
}