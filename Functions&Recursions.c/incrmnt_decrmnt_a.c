#include<stdio.h>
int main() {
    int a;
    printf("enter a:\n");
    scanf("%d", &a);
    int pre_increment = ++a;
    int post_increment = a++;
    int pre_decrement = --a;
    int post_decrement = a--;
    printf("the value of a is: %d\n", a);
    printf("after pre_increment (++a): %d\n", pre_increment);
    printf("after post_increment (a++): %d\n", post_increment);
    printf("after pre_decrement (--a): %d\n", pre_decrement);
    printf("after post_decrement (a--): %d\n", post_decrement);
    printf("the values of a, ++a, a++, --a, a-- are:\n");
    printf(" %d %d %d %d %d ", a, pre_increment, post_increment, pre_decrement, post_decrement);
    return 0;
}