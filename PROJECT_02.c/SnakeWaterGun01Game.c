#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(0));
    int player, computer = rand() % 3;
    /*  0 ---> for Snake
        1 ---> for Water
        2 ---> for Gun */
    /* Snake(wins) --- Water(lose) */
    /* Water(wins) --- Gun(lose) */
    /* Gun(wins) --- Snake(lose) */
    printf("choose 0 for Snake, 1 for Water, and 2 for Gun\n");
    scanf("%d", &player);
    printf("computer choose %d\n", computer);
    if (player == 0 && computer == 0)
    {
        printf("Its Draw!\n");
    }
    else if (player == 0 && computer == 1)
    {
        printf("You Win!\n");
    }
    else if (player == 0 && computer == 2)
    {
        printf("You lose!\n");
    }
    else if (player == 1 && computer == 0)
    {
        printf("You lose!\n");
    }
    else if (player == 1 && computer == 1)
    {
        printf("Its Draw!\n");
    }
    else if (player == 1 && computer == 2)
    {
        printf("You Win!\n");
    }
    else if (player == 2 && computer == 0)
    {
        printf("You Win!\n");
    }
    else if (player == 2 && computer == 1)
    {
        printf("You lose!\n");
    }
    else if (player == 2 && computer == 2)
    {
        printf("Its Draw!\n");
    }
    else
    {
        printf("Invalid input! please choose 0, 1, 0r 2 only.\n");
    }
    return 0;
}