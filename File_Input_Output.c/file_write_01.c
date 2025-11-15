#include<stdio.h>
int main(){
    FILE *ptr=fopen("veerendar.txt","w");
    if(ptr==NULL){
        printf("Unable to create or open the file.\n");
        return 1;
    }
    int num=432;
    fprintf(ptr,"%d",num);
    fclose(ptr);
    return 0;
}
