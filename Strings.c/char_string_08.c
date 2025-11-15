#include<stdio.h>
#include<string.h>
int main() {
    char st[]="veerendar";  // strcmp("far","joke")---> negative value
    char target[30];        // strcmp("joke","far")---> positive value
    strcpy(target, st);     // because joke has 4 letters and far has 3.
    printf("%s %s",st, target);  // here (4,3) correct, but (3,4) incorrect.
    return 0;
}