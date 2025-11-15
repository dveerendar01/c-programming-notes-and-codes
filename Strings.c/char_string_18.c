#include<stdio.h>
int main() {
    char c='e';
    int count=0;
    char st[]="Veerendar";
    for(int i=0; i<strlen(st); i++) {
        if(st[i]==c) {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}