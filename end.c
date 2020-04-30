#include<stdio.h>
#include <sos.h>

char board[50][50];
int Player1, Player2, Computer, players, n;

void winner()
{
        if ((Player1> Player2) && (Player1>Computer))
        {
                printf("Player 1 won!\n");
        }
        else if (Player2> Player1)
        {
                printf("Player 2 won!\n");
        }
        else if (Computer > Player1)
        {
                printf("I won!\n");
        }
        else
        {
                printf("Game is a draw\n");
        }
}

