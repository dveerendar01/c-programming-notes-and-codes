#include<stdio.h>
int change_to_Ten_times(int a) {
    a*=10; //a=a*10
}
int main() {
    int a;
    printf("enter a:\n");
    scanf("%d", &a);
    printf("before change a is: %d\n", a);
    a = change_to_Ten_times(a);
    printf("after change a is: %d\n", a);
    return 0;
}