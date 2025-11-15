#include<stdio.h>
int main(){
    FILE*ptr;
    int num;
    ptr=fopen("int.txt","r");
    if(ptr==NULL){
        printf("file read error\n");
        return 1;
    }
    fscanf(ptr,"%d",&num);
    fclose(ptr);
    ptr=fopen("int.txt","w");
    if(ptr==NULL){
        printf("file write error\n");
        return 1;
    }
    fprintf(ptr,"%d",2*num);
    fclose(ptr);
    return 0;
}
