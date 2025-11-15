#include <stdio.h>
int main()
{
    FILE *ptr;
    ptr = fopen("veerendar2.txt", "r");
    int num;
    fscanf(ptr, "%d", &num);
    printf("the value of num is %d\n", num);
    fclose(ptr);
    return 0;
} // a file is a struct which needs to be created for opening the file
/* program --> (C program) --> write --> FILE
    reverse program <-- (C program) <-- read <-- FILE */
/* file*ptr;
    ptr=fopen("filename.txt","mode"); */
/* "r"--> open for reading mode
    "rb"--> open for reading in binary mode
    "w"--> open for writing mode */
/* Over Written
    "wb"--> open for writing in binary mode
    "a"--> open for append (if the file does not exits, it will be created) */
/* To close FILE we use
   fclose(ptr); */