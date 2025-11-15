#include<stdio.h>
int main() {
    int n,i,sum;
    n=8, sum=0;
    for(i=1; i<=10; i++) {
        sum+=(n*i);
    }
    printf("sum of table of 8 is %d\n", sum);
    return 0;
}