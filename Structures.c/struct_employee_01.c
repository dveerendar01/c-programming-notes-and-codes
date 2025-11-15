#include<stdio.h>
struct employee {
    int code;
    char name[50]; // ( ) paranthesis
    float salary; // *(*ptr).code or ptr-->code
};
int main() {
    int code=101;
    char name[50]="Veerendar Rathod";
    float salary=50000;
    printf("code: %d\n", code);
    printf("name: %s\n", name);
    printf("salary: %.4f\n", salary);
    return 0;
}