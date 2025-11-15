#include<stdio.h>
int main() {
    int a,b,c,d;
    printf("enter a:\n");
    scanf("%d", &a);
    printf("enter b:\n");
    scanf("%d", &b);
    printf("enter c:\n");
    scanf("%d", &c);
    printf("enter d:\n");
    scanf("%d", &d);
    printf("the values are %d %d %d %d\n", a,b,c,d);
    if(a>b && a>c && a>d) {
        printf("the greatest of all is %d\n", a);
    }
    else if(b>a && b>c && b>d) {
        printf("the greatest of all is %d\n", b);
    }
    else if(c>a && c>b && c>d) {
        printf("the greatest of all is %d\n", c);
    }
    else if(d>a && d>b && d>c) {
        printf("the greatest of all is %d\n", d);
    }
    else {
        printf("one of them is matched or invalid!");
    }
    return 0;
}