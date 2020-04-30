#include <stdio.h>
#include <sos.h>

char board[50][50];
int Player1, Player2, Computer, players, n;

int game_done()
{
        int row, col;

        for (row=0; row<n; row++)
        {
                for(col=0; col<n; col++)
                {
                        if (board[row][col] == ' ')
                        {
                                return 0;
                        }
                }
        }

        return 1;
}

int square_valid (int square)
{
   int row, col;

   if(square>0 && square<((n*n)+1))
   {
        row = (square-1)/n;
        col = (square-1)%n;

        if (board[row][col]==' ')
        {
                return 1;
        }
        else
        {
                return 0;
        }
  }
  else
  {
        return 0;
  }
}

