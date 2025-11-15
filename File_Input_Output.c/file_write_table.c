#include<stdio.h>
int main() {
    FILE*fptr=fopen("table.txt","w");
    if(fptr==NULL) {
        printf("error opening file.\n");
        return 1;
    }
    int num=4;
    for(int i=0; i<10; i++) {
        fprintf(fptr, "%d\n", num*(i+1));
    }
    fclose(fptr);
    return 0;
}