#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
    srand(time(0)); //Initialize random number generator
    int random_number = (rand()%1000)+1; //generate random number b/w 1 and 1000
    printf("Random number: %d\n", random_number); //print random number
    return 0;
}
