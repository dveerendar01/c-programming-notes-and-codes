#include<stdio.h>
float c2f(float);
float c2f(float c){
    return ((9*c)/5)+32;
}
int main() {
    float c;
    printf("enter the celcius value:\n");
    scanf("%f", &c);
    printf("the value of %.2f celcius to fahrenheit is %.4f\n", c, c2f(c));
    return 0;
}