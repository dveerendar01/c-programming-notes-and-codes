#include<stdio.h>
int main() {  // the index of an array size 'n' goes from n to (n-1)
    int marks[5]={1,3,8,4}; // integer can be 2 or 4 bytes of size
    marks[2]=8;  // 1 byte = 8 bits, 
    printf("the value of marks[2] is %d\n", marks[2]);
    return 0;  // 1 bit =( 0 or 1)
}   // the array index starts with 0.