#include<stdio.h>
int main() {
    int year;
    printf("enter year:");
    scanf("%d", &year);
    if(year%4==0 && year%100!=0 || year%400==0) {
        printf("the year is %d a leap year", year);
    }
    else {
        printf("the year is %d not a leap year");
        return 1;
    }
    return 0;
}