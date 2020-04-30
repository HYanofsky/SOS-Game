#include <stdio.h>
#include <sos.h>

char board[50][50];
int Player1, Player2, Computer, players, n;

void init_board()
{
        for (int row = 0; row < n; row++)
        {
                for (int col=0; col<n; col++)
                {
                        board[row][col]=' ';
                }
        }
        Player1 = 0;
        Player2 = 0;
        Computer = 0;

        return;
}

void draw_board()
{
        int row, col;
        printf("\n");
        for (int row=0; row<n; row++)
        {
                printf(" *");
                for (col=0; col<n; col++)
                {
                        printf(" %c *", board[row][col]);
                }
                printf(" \n");
                if (row != n)
                {
                        printf(" ");
                        for(int ii=0; ii<((n*4)+1); ii++)
                        {
                                printf("*");
                        }
                        printf(" \n");
                }
        }
        printf("\n");
        if(players == 1)
        {
                printf("Player has %d points, while I have %d points.\n", Player1, Computer);
        }
        else if (players == 2)
        {
                printf("Player 1 has %d points, while Player 2 has %d points.\n", Player1, Player2);
        }
        return;
}



                                                                                                                      
