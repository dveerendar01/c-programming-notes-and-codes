#include<stdio.h>
int main() {
    int n;
    n=10;
    for(int i=1; i<=n; i++) {
        printf("%d x %d=%d\n", n, i, n*i);
    }
    return 0;
}