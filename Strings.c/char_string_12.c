#include<stdio.h>
int main() {
    char st[5];
    for(int i=0; i<4; i++) {
        printf("enter a character:\n");
        scanf("%c", &st[i]);
        fflush(stdin);
    }
    st[5]='\0';
    printf("you entered the string: %s\n", st);
    return 0;
}