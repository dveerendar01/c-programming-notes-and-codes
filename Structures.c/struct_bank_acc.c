#include<stdio.h>
struct bankacc {
    int acc_no;
    char name[20];
    char ifsc[12];
    float balance;
};
int main() { 
    struct bankacc acc = {
    523957242,
    "RATHODVEER",
    "SBIN0001234",
    15000.21,
    };
    printf("Account number: %d\n", acc.acc_no);
    printf("Account holder name: %s\n", acc.name);
    printf("IFSC code: %s\n", acc.ifsc);
    printf("Account balance: %.2f\n", acc.balance);
    return 0;
}