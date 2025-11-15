#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));
    int no_of_guesses=0;
    int guessed_number;
    int random_number=(rand()%100)+1;
    do {
        printf("guess the number:\n");
        scanf("%d", &guessed_number);
        if(guessed_number < random_number) {
            printf("enter higher number please!");
        }
        else if(guessed_number > random_number) {
            printf("enter lower number please!\n");
        }
        else {
            printf("Congrats!\n");
        }
        no_of_guesses++;
    }
    while(guessed_number != random_number);
    printf("You guessed the number in %d attempts\n", no_of_guesses);
    return 0;
}