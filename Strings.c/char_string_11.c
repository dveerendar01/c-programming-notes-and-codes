#include<stdio.h>
int main() {
    char st[]="VEERENDAR";
    int i=0, count;
    char c=st[i];
    while(c!='\0') {
        c=st[i];
        i++;
    }
    count=i-1;
    printf("%d",count);
    return 0;
}