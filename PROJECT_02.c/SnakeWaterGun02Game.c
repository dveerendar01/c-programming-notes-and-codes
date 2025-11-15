#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    /*  0 ---> for Snake
            1 ---> for Water
            2 ---> for Gun */
    /* Snake(wins) --- Water(lose) */
    /* Water(wins) --- Gun(lose) */
    /* Gun(wins) --- Snake(lose) */
    int player;
    srand(time(0));
    while (1)
    {
        printf("Choose 0 for Snake, 1 for Water, 2 for Gun or -1 to Quite:\n");
        scanf("%d", &player);
        if (player == -1)
        {
            printf("Thanks for playing!\n");
            break;
        }
        if (player < 0 || player > 2)
        {
            printf("Invalid input! Please choose 0, 1, or 2 only.\n");
            continue;
        }
        int computer = rand() % 3;
        printf("computer chose %d\n", computer);

        if (player == computer)
        {
            printf("Its Draw!\n");
        }
        else if ((player == 0 && computer == 1) || (player == 1 && computer == 2) || (player == 2 && computer == 0))
        {
            printf("You Win!\n");
        }
        else
        {
            printf("You lose!\n");
        }
    }
    return 0;
}