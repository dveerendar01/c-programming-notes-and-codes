#include<stdio.h>
int factorial(int);
int factorial(int n){
    if(n==0 || n==1){
        return 1;
    }
    return n*factorial(n-1);
}
int main() {
    int n;
    printf("enter n:\n");
    scanf("%d", &n);
    printf("the factorial of %d or %d! is %d\n", n, n, factorial(n));
    return 0;
}