#include <stdio.h>
#include <sos.h>

char board[50][50];
int Player1, Player2, Computer, players, n;

void two_player()
{
        do
        {
                player_move(1);
                if(game_done())
                {
                        return;
                }
                player_move(2);
        }while (!game_done());

        return;
}

void player_move(int player)
{
  int square;
  int row, col;
  char symbol;

  do
  {
        draw_board();
        printf("\nPlayer %d enter a square: \n",player);

        do
        {
                scanf("%d", &square);
        }while (!square_valid(square));

        row = (square-1)/n;
        col = (square-1)%n;

        printf("What symbol do you want to enter in square %d? (S or O) \n", square);
        do
        {
                symbol = getchar();
        }while ((symbol != 'S') && (symbol != 's') && (symbol != 'O') && (symbol != 'o') && (symbol != '0'));

        if((symbol == 'S') || (symbol == 's'))
        {
                symbol = 'S';
        }
        else
        {
                symbol = 'O';
        }

        board[row][col] = symbol;
   }while(find_sos (square, player, symbol));

   return;
}

