#include<stdio.h>
int main() {
    int i=5;
    printf("the value of i is %d\n", i);
    i=i+5; //5+5=10
    printf("the value of i is now %d\n",i); //10
    printf("the value of i is %d\n", i++); //10+1=11
    printf("the value of i is now %d\n", i); //11
    return 0;
}