#include<stdio.h>
int main(){
    int ch;
    FILE*ptr1=fopen("input.txt","r");
    FILE*ptr2=fopen("output.txt","a");
    if(ptr1==NULL||ptr2==NULL){
        printf("File error\n");
        return 1;
    }
    while((ch=fgetc(ptr1))!=EOF){
        fputc(ch,ptr2);
        fputc(ch,ptr2);
        putchar(ch);
    }
    fclose(ptr1);
    fclose(ptr2);
    return 0;
}
