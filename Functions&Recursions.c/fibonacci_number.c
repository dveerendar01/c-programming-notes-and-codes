#include<stdio.h>
int fibonacci(int);
int fibonacci(int n) {
    if(n==0) {
        return 0;
    }
    else if(n==1) {
        return 1;
    }
    else {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}
int main() {
    int n;
    printf("enter n value:\n");
    scanf("%d", &n);
    printf("the %d fibonacci number is %d\n", n, fibonacci(n));
    return 0;
}