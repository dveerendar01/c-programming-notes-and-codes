#include<stdio.h>
int main() {
    char c='d';
    int contains=0;
    char st[]="Veerendar";
    for(int i=0; i<strlen(st); i++) {
        if(st[i]==c) {
            contains=1;
            break;
        }
    }
    if(contains) {
        printf("yes, it contains\n");
    }
    else {
        printf("no, it does not cointains\n");
    }
    return 0;
}