#include<stdio.h>
int main() {
    int n , i, isprime = 1;
    printf("enter n:\n");
    scanf("%d", &n);
    if (n<=1){
        printf("%d is not a prime", n);
        return -1;
    }
    for(i=2; i*i<=n; i++){
        if(n%i==0){
            isprime = 0;
            break;
        }
    }
    if (isprime) {
        printf("%d is a prime", n);
    }
    else {
        printf("%d is not a prime\n", n);
    }
    return 0;
}