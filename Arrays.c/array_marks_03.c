#include<stdio.h>
int main() {
    int marks[4];
    printf("enter the marks of four students:\n");
    for(int i=0; i<4; i++) {
        scanf("%d", &marks[i]);
    }
    for(int i=0; i<4; i++) {
        printf("the value of marks at index %d is %d\n", i, marks[i]);
    }
    return 0;
}