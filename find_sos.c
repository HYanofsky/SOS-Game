#include <stdio.h>
#include <sos.h>

char board[50][50];
int Player1, Player2, Computer, players, n;

int find_sos (int square, int player, char symbol)
{
        int row,col,sos;

        row = (square-1)/n;
        col = (square-1)%n;
        sos = 0;

  if(symbol == 'S')
  {
        if ((board[row][col-2] == 'S') && (board[row][col-1] == 'O'))
        {
                sos++;
        }
        if ((board[row][col+1]== 'O') && (board[row][col+2] == 'S'))
        {
                sos++;
        }
        if((board[row+1][col] == 'O') && (board[row+2][col] == 'S'))
        {
                sos++;
        }
        if((board[row-1][col] == 'O') && (board[row-2][col] == 'S'))
        {
                sos++;
        }
        if((board[row+1][col+1] == 'O') && (board[row+2][col+2] == 'S'))
        {
                sos++;
        }
        if((board[row-1][col-1] == 'O') && (board[row-2][col-2] == 'S'))
        {
                sos++;
        }
        if((board[row+1][col-1] == 'O') && (board[row+2][col-2] == 'S'))
        {
                sos++;
        }
        if((board[row-1][col+1] == 'O') && (board[row-2][col+2] == 'S'))
        {
                sos++;
        }
  }
  else if(symbol == 'O')
  {
        if((board[row+1][col] == 'S') && (board[row-1][col] == 'S'))
        {
                sos++;
        }
        if((board[row][col+1] == 'S') && (board[row][col-1] == 'S'))
        {
                sos++;
        }
        if((board[row+1][col+1] == 'S') && (board[row-1][col-1] == 'S'))
        {
                sos++;
        }
        if((board[row+1][col-1] == 'S') && (board[row-1][col+1] == 'S'))
        {
                sos++;
        }
  }



        if (player == 1)
        {
                Player1= Player1+sos;
        }
        else if (player == 2)
        {
                 Player2= Player2+sos;
        }
        else if (player == 3)
        {
                 Computer= Computer+sos;
        }



        if (sos>0)
        {
                return 1;
        }
        else
        {
                return 0;
        }
}

