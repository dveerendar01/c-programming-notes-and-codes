#include<stdio.h>
int sum_natural(int);
int sum_natural(int n) {
    if(n==0) {
        return 0;
    }
    else if(n==1) {
        return 1;
    }
    else {
        return sum_natural(n-1)+n; // sum=1+2+3+4+5+----+(n-1)+n
    }                             // sum=sum(n-1)+n
}
int main() {
    int n;
    printf("enter the value of n:\n");
    scanf("%d", &n);
    printf("the sum of first %d natural numbers is %d\n", n, sum_natural(n));
    return 0;
}