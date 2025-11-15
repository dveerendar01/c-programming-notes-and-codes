#include <stdio.h>
int main()
{
    FILE *ptr = fopen("veerendar1.txt", "r");
    if (ptr == NULL)
    {
        printf("The file does not exist, sorry!\n");
    }
    else
    {
        int num;
        if (fscanf(ptr, "%d", &num) == 1)
        {
            printf("The value of num is %d\n", num);
        }
        if (fscanf(ptr, "%d", &num) == 1)
        {
            printf("The value of num is %d\n", num);
        }
    }
    fclose(ptr); // fclose(ptr) is compulsary to close the file after reading/writing
    return 0;
}
