#include<stdio.h>
int main() {
    int n, i;
    int product=1;
    printf("enter n:\n");
    scanf("%d", &n);
    for(i=1; i<=n; i++){
    product*=i; //product=product+i
    }
    printf("the factorial is %d\n", product);
    return 0;
}