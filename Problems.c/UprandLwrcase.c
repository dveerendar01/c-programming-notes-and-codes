#include<stdio.h>
int main() {
    char ch;
    printf("enter the character:");
    scanf("%c",&ch);
    printf("the character is %c\n", ch);
    printf("the value of character is %d\n",ch);
    if(ch>='a' && ch<='z') {
        printf("the character is in lowercase\n");
    }
    else if(ch>='A' &&ch<='Z') {
        printf("the character is in uppercase\n");
    }
    else {
        printf("invalid character!\n");
    }
    return 0;
}