#include<stdio.h>
int main() {
    int age=15;
    if(age>=10){
        printf("you are inside if\n");
        printf("your age is greater than or equal to 10\n");
    }
    if(age%5==0){
        printf("you are inside another if\n");
        printf("your age is divisible by 5\n");
    }
    return 0;
}