#include<stdio.h>
int main() {
    int CGPA[6]={9,6,8,7,10,5};
    for(int i=0; i<6; i++) {
        printf("the CGPA of student at index %d is %d\n", i, CGPA[i]);
    }
    return 0;
}