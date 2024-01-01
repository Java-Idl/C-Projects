#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

// Function prototypes
void SP();
void TP();
void E();

int main(void)
{
    int c;
    printf("SinglePlayer(1)//TwoPlayer(2)\n");
    scanf("%d", &c);
    printf("\n");
    if (c == 1)
    {
        SP();
    }
    else if (c == 2)
    {
        TP();
    }
    else
    {
        E();
    }

    return 0;
}

void E()
{
    int c;
    printf("Press (0) to run the program again\nPress any other key to exit\n");
    scanf("%d", &c);
    printf("\n");
    if (c == 0)
    {
        main();
    }
}

void SP()
{
    int n, t, p, b, pw = 0, cw = 0, c;

    printf("Number of Rounds: ");
    scanf("%d", &n);

    srand(time(NULL)); // Fix the include statement here

    for (t = 1; t <= n; ++t)
    {
        printf("Round %d\n", t);

        printf("Player's choice Rock(1)//Paper(2)//Scissor(3): ");
        scanf("%d", &p);
        if (p > 3)
        {
            p = ((p % 3) + 1);
        }

        switch (p)
        {
        case 1:
            printf("Player plays: Rock\n");
            break;
        case 2:
            printf("Player plays: Paper\n");
            break;
        case 3:
            printf("Player plays: Scissor\n");
            break;
        }

        b = ((rand() % 3) + 1);

        switch (b)
        {
        case 1:
            printf("Computer plays: Rock\n");
            break;
        case 2:
            printf("Computer plays: Paper\n");
            break;
        case 3:
            printf("Computer plays: Scissor\n");
            break;
        }

        // Determine the winner using a switch statement
        switch (p)
        {
        case 1:
            switch (b)
            {
            case 1:
                printf("It's a tie!\n");
                break;
            case 2:
                printf("Computer wins!\n");
                cw++;
                break;
            case 3:
                printf("Player wins!\n");
                pw++;
                break;
            }
            break;
        case 2:
            switch (b)
            {
            case 1:
                printf("Player wins!\n");
                pw++;
                break;
            case 2:
                printf("It's a tie!\n");
                break;
            case 3:
                printf("Computer wins!\n");
                cw++;
                break;
            }
            break;
        case 3:
            switch (b)
            {
            case 1:
                printf("Computer wins!\n");
                cw++;
                break;
            case 2:
                printf("Player wins!\n");
                pw++;
                break;
            case 3:
                printf("It's a tie!\n");
                break;
            }
            break;
        }
        printf("\n");
    }

    printf("\nPlayer Wins: %d\n", pw);
    printf("Computer Wins: %d\n", cw);
    printf("Total Number of Rounds: %d\n", n);
    printf("Play again?\nYes(0)//No(Any other key)\n");
    scanf("%d", &c);
    printf("\n");
    if (c == 0)
    {
        main();
    }
}

void TP()
{
    int p1, p2, n, p1w = 0, p2w = 0, c, t;

    printf("Number of Rounds: ");
    scanf("%d", &n);

    for (t = 1; t <= n; ++t)
    {
        printf("Round %d\n", t);

        // Player 1's choice
        printf("Player 1's choice Rock(1)//Paper(2)//Scissor(3): ");
        scanf("%d", &p1);
        if (p1 > 3)
        {
            p1 = ((p1 % 3) + 1);
        }

        // Player 2's choice
        printf("Player 2's choice Rock(1)//Paper(2)//Scissor(3): ");
        scanf("%d", &p2);
        if (p2 > 3)
        {
            p2 = ((p2 % 3) + 1);
        }

        switch (p1)
        {
        case 1:
            printf("Player 1 plays: Rock\n");
            break;
        case 2:
            printf("Player 1 plays: Paper\n");
            break;
        case 3:
            printf("Player 1 plays: Scissor\n");
            break;
        }

        switch (p2)
        {
        case 1:
            printf("Player 2 plays: Rock\n");
            break;
        case 2:
            printf("Player 2 plays: Paper\n");
            break;
        case 3:
            printf("Player 2 plays: Scissor\n");
            break;
        }

        switch (p1)
        {
        case 1:
            switch (p2)
            {
            case 1:
                printf("It's a tie!\n");
                break;
            case 2:
                printf("Player 2 wins!\n");
                p2w++;
                break;
            case 3:
                printf("Player 1 wins!\n");
                p1w++;
                break;
            }
            break;
        case 2:
            switch (p2)
            {
            case 1:
                printf("Player 1 wins!\n");
                p1w++;
                break;
            case 2:
                printf("It's a tie!\n");
                break;
            case 3:
                printf("Player 2 wins!\n");
                p2w++;
                break;
            }
            break;
        case 3:
            switch (p2)
            {
            case 1:
                printf("Player 2 wins!\n");
                p2w++;
                break;
            case 2:
                printf("Player 1 wins!\n");
                p1w++;
                break;
            case 3:
                printf("It's a tie!\n");
                break;
            }
            break;
        }
        printf("\n");
    }

    printf("\nPlayer 1 Wins: %d\n", p1w);
    printf("Player 2 Wins: %d\n", p2w);
    printf("Total Number of Rounds: %d\n", n);
    printf("Play again?\nYes(0)//No(Any other key)\n");
    scanf("%d", &c);
    printf("\n");
    if (c == 0)
    {
        main();
    }
}
