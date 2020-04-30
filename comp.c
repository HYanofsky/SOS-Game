#include <stdio.h>
#include <sos.h>

char board[50][50];
int Player1, Player2, Computer, players, n;

void comp_play()
{
        do
        {
                player_move(1);
                if (!game_done())
                {
                        comp_move();
                }
        }while(!game_done());

        return;
}

int find_square()
{
        int row, col, square;

        for (square=1; square<((n*n)+1); square++)
        {
                row = (square-1)/n;
                col = (square-1)%n;
                if (board[row][col] == ' ')
                {
                        return square;
                }
        }
        return 0;
}
void comp_move()
{

  int square;
  int row, col;
  char symbol;

  do
  {
        draw_board();
        if(comp_find_os())
        {
                square = comp_find_os();
                symbol = 'S';
        }
        else if(comp_find_ss())
        {
                square = comp_find_ss();
                symbol = 'O';
        }
        else
        {
                square = find_square();
                symbol = 'S';
        }
        row = (square-1)/n;
        col = (square-1)%n;

        board[row][col] = symbol;
        printf("I am putting a %c in %d square\n", symbol, square);
   }while(find_sos (square, 3, symbol));

   return;
}
int comp_find_os ()
{
        int square;

        for (int ii=0; ii<n; ii++)
        {
                for(int jj=0; jj<n; jj++)
                {
                   square = ((ii*n) +jj)+1;
                   if(square_valid(square))
                   {
                        if((board[ii][jj+1]=='O') && (board[ii][jj+2] == 'S'))
                        {
                                return square;
                        }
                       if((board[ii][jj-1]=='O') && (board[ii][jj-2] == 'S'))
                        {
                                return square;
                        }
                        if ((board[ii+1][jj] == 'O') && (board[ii+2][jj] =='S'))
                        {
                                return square;
                        }
                        if ((board[ii-1][jj] == 'O') && (board[ii-2][jj] =='S'))
                        {
                                return square;
                        }
                        if((board[ii+1][jj+1] == 'O') && (board[ii+2][jj+2] == 'S'))
                        {
                                return square;
                        }
                        if((board[ii-1][jj-1] == 'O') && (board[ii-2][jj-2] == 'S'))
                        {
                                return square;
                        }
                        if((board[ii+1][jj-1] == 'O') && (board[ii+2][jj-2] == 'S'))
                        {
                                return square;
                        }
                        if((board[ii-1][jj+1] == 'O') && (board[ii-2][jj+2] == 'S'))
                        {
                                return square;
                        }
                  }
                }
        }
        return 0;
}
int comp_find_ss()
{
        int square;

        for (int ii=0; ii<n; ii++)
        {
                for(int jj=0; jj<n; jj++)
                {
                   square = ((ii*n) +jj)+1;

                   if(square_valid(square))
                   {

                        if((board[ii][jj+1]=='S') && (board[ii][jj-1] == 'S'))
                        {
                                return square;
                        }
                        if ((board[ii+1][jj] == 'S') && (board[ii-1][jj] =='S'))
                        {
                                return square;
                        }
                        if((board[ii+1][jj+1] == 'S') && (board[ii-1][jj-1] == 'S'))
                        {
                                return square;
                        }
                        if((board[ii+1][jj-1] == 'S') && (board[ii-1][jj+1] == 'S'))
                        {
                                return square;
                        }
                  }
                }
        }
        return 0;
}

