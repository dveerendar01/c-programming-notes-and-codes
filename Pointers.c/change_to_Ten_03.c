#include<stdio.h>
void change_to_Ten_times(int);
void change_to_Ten_times(int a) {
    a=a*10;
}
int main() {
    int a;
    printf("enter a:\n");
    scanf("%d", &a);
    printf("before change a is: %d\n", a);
    change_to_Ten_times(a);
    printf("after change a is: %d\n", a);
    return 0;
}