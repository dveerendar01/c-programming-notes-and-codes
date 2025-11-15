#include<stdio.h>
int main() {
    int marks[5];
    printf("enter the marks of five  students:\n");
    scanf("%d", &marks[0]);
    scanf("%d", &marks[1]);
    scanf("%d", &marks[2]);
    scanf("%d", &marks[3]);
    scanf("%d", &marks[4]);
    printf("the value of marks[0] is %d\n", marks[0]);
    printf("the value of marks[1] is %d\n", marks[1]);
    printf("the value of marks[2] is %d\n", marks[2]);
    printf("the value of marks[3] is %d\n", marks[3]);
    printf("the value of marks[4] is %d\n", marks[4]);
    return 0;
}