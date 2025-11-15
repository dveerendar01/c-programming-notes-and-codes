#include<stdio.h>
int main() {
    for(int i=0; i<=15; i++) {
        if(i==5) { //skips the iteration when i is 5
            continue;
        }
        if(i>14) {
            break; // exits the loop when i is greater than 14
        }
        printf("i is %d\n", i);
    }
    return 0;
}