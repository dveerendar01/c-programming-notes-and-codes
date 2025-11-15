#include<stdio.h>
int main() {
    int arr[10];
    for(int i=0; i<10; i++) { // or i=1 and so on 
        arr[i]=5*(i+1);  // or arr[i]=5*i, for i=1 
    }
    for(int i=0; i<10; i++) {
        printf("the value of 5x%d=%d\n", i+1, arr[i]);
    }
    return 0;
}