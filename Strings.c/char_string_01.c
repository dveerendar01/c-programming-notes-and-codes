#include<stdio.h>
int main() {
    char st[]={ 'a','b','c','d','\0'}; // null char is very important in string
    printf("first character is %c\n", st[0]);
    return 0; // gets() is used to appropriately read a multi_word string
}