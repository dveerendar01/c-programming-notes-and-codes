#include<stdio.h>
int fibonacci_series(int);
int fibonacci_series(int n) {
    if(n==0) {
        return 0;
    }
    else if(n==1) {
        return 1;
    }
    else {
        return fibonacci_series(n-1) + fibonacci_series(n-2);
    }
}
int main() {
    int n;
    printf("enter n value:\n");
    scanf("%d", &n);
    printf("the fibonacci series up to %d is:\n", n);
    for(int i=0; i<n; i++) {
        printf(" %d ", fibonacci_series(i));
    }
    return 0;
}