#include<stdio.h>
int main() {
    int n,i,j;
    printf("enter n:\n");
    scanf("%d", &n);
    for(i=0; i < n; i++) {   // if i=3,it runs from 0 to 2
        for(j=0; j < n-i-1; j++){
            printf(" ");
        }
        for(j=0; j < (2*i)+1; j++) {
            // if i=0, print 1 star
            // if i=1, print 3 stars
            // is i=2, printf 5 stars 
            printf("*");
        }
        printf("\n");
    }
    return 0;
}