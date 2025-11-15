#include<stdio.h>
float force(float);
float force(float mass){
    return mass*(9.8); //force=mass*acceleration
}                      //a=9.8
int main() {
    float mass;
    printf("enter mass value:\n");
    scanf("%f", &mass);
    printf("the value of force is %.2f", force(mass));
    return 0;
}