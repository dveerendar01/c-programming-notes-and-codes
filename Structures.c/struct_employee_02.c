#include<stdio.h>
struct empoyee {
    int e1_code;
    char e1_name[30];
    float e1_salary;

    int e2_code;
    char e2_name[26];
    float e2_salary;
};
int main() {
    int e1_code=105;
    char e1_name[30]="VEERENDAR";
    float e1_salary=65000;

    int e2_code=106;
    char e2_name[26]="SANTHU BAHI";
    float e2_salary=92000;

    printf("e1_code: %d\n", e1_code);
    printf("e1_name: %s\n", e1_name);
    printf("e1_salary: %.3f\n", e1_salary);
    printf("\n");
    printf("e2_code: %d\n", e2_code);
    printf("e2_name: %s\n", e2_name);
    printf("e2_salary: %.3f\n", e2_salary);

    return 0;
}
