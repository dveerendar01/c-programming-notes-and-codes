#include<stdio.h>
int mystrlen(char st[]) {
    int i=0;
    while(st[i]!='\0') {
        i++;
    }
}
void mystrcpy(char target[], char source[]) {
    for(int i=0; i < mystrlen(source); i++) {
        target[i]=source[i];
    }
    target[mystrlen(source)]='\0';
}
int main() {
    char source[]="RATHOD VEER";
    char target[30];
    mystrcpy(target, source);
    printf("%s %s", source, target);
    return 0;
}
