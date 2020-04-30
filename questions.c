#include <stdio.h>
#include <sos.h>

char board[50][50];
int Player1, Player2, Computer, players, n;

int numb_players()
{
        char answer;

        printf("How many players are playing? (1 or 2)\n");
        do
        {
                answer = getchar();
        } while((answer !='1') && (answer !='2'));

        if(answer == '1')
        {
                return 1;
        }
        else
        {
                return 2;
        }
}

void how_big()
{

        printf("The board is nxn, how big do you want n to be (1-50)\n");
        do
        {
                scanf("%d", &n);
        } while((n==0) && (n>50));

        return;
}

int play_again()
{
  char response;

  printf("Do you want to play again? (y/n) \n");
  do
  {
    response = getchar();

  }while ((response != 'y') && (response != 'Y') &&
       (response != 'n') && (response != 'N'));

  if ((response == 'y') || (response == 'Y'))
  {
     return 1;
  }
  else
  {
    return 0;
  }
}

